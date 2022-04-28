#include<bits/stdc++.h>
using namespace std;

int main()
{

  map<pair<int, int>, int> pairs;
  vector<pair<int, int> > nums;
  //unordered_set<int> nodups;
  int x = 0;
  cin >> x;
  for(int i=0; i<x; i++) {
     int a, b, c = 0;
     cin >> a >> b >> c;
    // nums.push_back({a,b});
     //pairs[{a,b}]= c;
    // nodups.insert(a);
     //nodups.insert(b);
     //nodups.insert(c);
  }
  sort(nums.begin(), nums.end());
  //for(auto &num: nodups) {
    // cout << num << "\n";
  //}
  //for(auto &p: pairs) {
     //cout << p.first.first << " " << p.first.second << " " << p.second << "\n";
  //}
   

}