#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
            int sp = -1;
            for(int i=2; i<=(int)(sqrt(n))+1; i++) {
                if(n%i==0) {
                    sp = i;
                    break;
                }
            }
            if(sp==-1) {
                cout << 1 << " " << n-1 << "\n";
            }
            else {
                cout << (n/sp) << " " << n-(n/sp) << "\n";
            }
        
    }
}