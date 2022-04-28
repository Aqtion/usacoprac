#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int n;
        cin >> n;
        vector<int> passes;
        int maxp = -1;
        long long sum = 0;
        for(int j=0; j<n; j++) {
            int pass;
            cin >> pass;
            sum+=pass;
            passes.push_back(pass);
            maxp = max(maxp, pass);
        }
        if(maxp==0) {
            cout << 0 << "\n";
        }
       else  if(2*maxp <= sum) {
            cout << 1 << "\n";
        }
        else {
            cout << 2*maxp - sum << "\n";
        }
    }
}