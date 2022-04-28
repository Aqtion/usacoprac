#include <bits/stdc++.h>
using namespace std;

struct comp {
   bool operator()(const pair<int, int> &x, const pair<int, int> &y) const {
       if(x.first-x.second!=y.first-y.second) {
         return x.first - x.second < y.first-y.second;
        }
        else {
            return x.first + x.second > y.first+y.second;
        }
    }
};
int main() {
    freopen("mountains.in","r",stdin);
    freopen("mountains.out","w",stdout);
    int n = 0;
    cin >> n;
    vector<pair<int, int> > pairs;
   for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        pairs.push_back(make_pair(a,b));
    }
    sort(pairs.begin(), pairs.end(), comp());
    int ans = 0;
    long maxright = -1E9;
    for(int i=0; i<n; i++) {
        if((long)(pairs[i].first) + pairs[i].second > maxright) {
            ans++;
            maxright = pairs[i].first + pairs[i].second;
        }
        
    }
    cout << ans;
}
