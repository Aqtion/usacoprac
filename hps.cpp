#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);
    int n = 0;
    cin >> n;
    vector<int> h(n);
    vector<int> p(n);
    vector<int> s(n);
    h[0] = 0;
    s[0] = 0;
    p[0] = 0;
    int index = 0;
    char c;
    cin >> c;
    if(c=='P') {
        p[0] = 1;
     }
     else if(c=='H') {
        h[0] = 1;
     }
    else if(c=='S') {
         s[0]=1;
    }
    for(int i=1; i<n; i++) {
        cin >> c;

        if(c=='P') {
            p[i] = p[i-1]+1;
            h[i] = h[i-1];
            s[i] = s[i-1];
        }
        else if(c=='H') {
            h[i] = h[i-1]+1;
            p[i] = p[i-1];
            s[i] = s[i-1];
        }
        else if(c=='S') {
            s[i] = s[i-1]+1;
            h[i] = h[i-1];
            p[i] = p[i-1];
        }
    }
    int maxwins = -1E9;
    for(int i=0; i<n; i++) {
        int lm = -1E9;
        int rm = -1E9;
        if(i==0) {
            maxwins = max(maxwins, max(h[n-1], max(s[n-1], p[n-1])));
        }
        else {
            lm = max(lm, max(h[i-1], max(s[i-1], p[i-1])));
            rm = max(rm, max(h[n-1]-h[i-1], max(s[n-1]-s[i-1], p[n-1]-p[i-1])));
            maxwins = max(maxwins, lm+rm);
        }
    }
    cout << maxwins;

}