#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > pairs;
    while(n--) {
        int b, d;
        cin >> b >> d;
        pairs.push_back(make_pair(b,1));
        pairs.push_back(make_pair(d,-1));
    }
    sort(pairs.begin(), pairs.end());
    int c = 0;
    int a = 0;
    int year = 0;
    for(int i=0; i<pairs.size(); i++) {
        c+=pairs[i].second;
        if(c>a) {
            a = c;
            year = pairs[i].first;
        }
    }
    cout << year << " " << a << "\n";

}