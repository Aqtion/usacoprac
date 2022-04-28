#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int b = 0;
    int w = 0;
    vector<bool> invert(n);
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='B') {
            invert[i] = false;
            b++;
        }
        else {
            invert[i] = true;
            w++;
        }
    }
    if(b%2 && w%2) {
        cout << -1 << "\n";
    }
    else if(w==n || b==n) {
        cout << 0 << "\n";
    }
    else {
        b = (b%2)?0:1;
        string ans;
        int cnt = 0;
        for(int i=0; i<n-1; i++) {
            if(invert[i] ^ b) {
                invert[i] = !invert[i];
                invert[i+1] = !invert[i+1];
                ans+=to_string(i+1);
                cnt++;
                ans+=" ";
            }
        }   
        cout << cnt << "\n";
        cout << ans << "\n";
    }
   
}