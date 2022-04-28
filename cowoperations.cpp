#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    string s = "";
    cin >> s;
    int q = 0;
    cin >> q;
    vector<array<int, 3> > prefixes{{}};
    for(int i=0; i<s.size(); i++) {
        prefixes.push_back(prefixes.back());
        if(s[i]=='C')prefixes.back()[0]++;
        if(s[i]=='O')prefixes.back()[1]++;
        if(s[i]=='W')prefixes.back()[2]++;
    }
    string ans = "";
    for(int i=0; i<q; i++) {
        int q1=0;
        int q2 = 0;
        cin >> q1 >> q2;
        if(((prefixes[q2][1]-prefixes[q1-1][1]) + (prefixes[q2][2]-prefixes[q1-1][2]))%2 ==0 && ((prefixes[q2][0]-prefixes[q1-1][0]) + (prefixes[q2][2]-prefixes[q1-1][2]))%2!=0) {
            ans+="Y";
        }
        else {
            ans+="N";
        }
    }
    cout << ans << "\n";
}
/*
odd c's so you can balance o and w
if there are even # of o and w and no c's, this will never work because there needs to be an extra c
there must be an even # of o and w and an odd # of c and o or even # of c and w and odd # of o and w
this is so eventually all the c's will cancel out with either o's or w's, then remaining o's and w's,
(of which there are an odd amount of), can create an odd number of c's so with even c's odd # wi
*/