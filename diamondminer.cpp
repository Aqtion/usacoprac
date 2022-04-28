#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;  
        cin >> n;
        vector<pair<int, int> > miners;
        vector<pair<int, int> > mines;
        for(int i=0; i<n*2; i++) {
            int x, y;
            cin >> x >> y;
            x = abs(x);
            y = abs(y);
            if(x==0) {
                miners.push_back(make_pair(x,y));
            }
            else {
                mines.push_back(make_pair(x, y));
            }
        }
        sort(miners.begin(), miners.end());
        sort(mines.begin(), mines.end());
        double energy = 0;
        for(int i=0; i<n; i++) {
            double fs = (1.0*miners[i].first - 1.0*mines[i].first)*(1.0*miners[i].first - 1.0*mines[i].first);
            double ss = (1.0*miners[i].second - 1.0*mines[i].second)*(1.0*miners[i].second - 1.0*mines[i].second);
            energy+=sqrt(fs+ss);
        }
        cout << setprecision(15) << fixed << energy << '\n'; 
    }
}