#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n>=20) {
            cout << "NO";
        }
        else {
            cout << "YES" << "\n";
            int first = 2;
            for(int i=1; i<=n; i++) {
                cout << first << " ";
                first*=3;
            }
        }
        cout << "\n";
    }
}