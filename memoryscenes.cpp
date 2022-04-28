#include <bits/stdc++.h>
using namespace std;

bool prime(int num) {
    for(int i=2; i<=num-1; i++) {
        if(num%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        bool one = false;
        string ans = "";
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i]=='8' || s[i]=='9') {
                ans+=s[i];
                one = true;
                break;
            }
        }
        if(one) {
            cout << 1 << "\n" << ans << "\n";
        }
        else {
            bool good = false;
            for(int i=0; i<k; i++) {
                for(int j=i+1; j<k; j++) {
                    if(!prime((s[i]-'0')*10 + (s[j]-'0'))) {
                        cout << 2 << "\n" << (s[i]-'0')*10 + (s[j]-'0') << "\n";
                        good = true;
                        break;
                    }
                }
                if(good) {
                    break;
                }
            }
        }
    }
}