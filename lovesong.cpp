#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> prefix(n+1);
    prefix.push_back(0);
    for(int i=1; i<=n; i++) {
        prefix[i] = prefix[i-1] + (s[i-1]-'a'+1);
    }
    for(int i=0; i<q; i++) {
        int f, s;
        cin >> s >> f;
        cout << prefix[f] - prefix[s-1] << "\n";
    }
   
}