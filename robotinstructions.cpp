#include <bits/stdc++.h>
using namespace std;
int targetx;
int targety;
vector<map<pair<int, int>, int> > keys1;
vector<map<pair<int, int>, int> > keys2;
vector<int> sizes;

void f(vector<pair<int, int> > &instructions, int index, int xsum, int ysum, int used, vector<int> &sizes, vector<map<pair<int, int>, int> > &keys, bool newinst) {
    //cout << xsum << " " << ysum << "\n";
    if(newinst) {keys[used][make_pair(xsum, ysum)]++;}
  
    if(index<instructions.size()) {
        f(instructions, index+1, xsum+instructions[index].first, ysum+instructions[index].second, used+1, sizes, keys, true);
        f(instructions, index+1, xsum, ysum, used, sizes, keys, false);
    }
}
int main() {
    int n = 0;
    cin >> n;
    vector<pair<int, int> > firsthalf;
    vector<pair<int, int> > secondhalf;
    vector<map<pair<int, int>, int> > keys1 (n+1);
    vector<map<pair<int, int>, int> > keys2 (n+1);
    map<pair<int, int>, int> map1;
    map<pair<int, int>, int> map2;
    for(int i=0; i<n/2+2; i++) {
        keys1.push_back(map1);
        keys2.push_back(map2);  
    }
    int xg, yg;
    cin >> xg >> yg;
    targetx = xg;
    targety = yg;
    vector<int> sizes (n+1);
    for(int i=0; i<n/2; i++) {
        int a, b;
        cin >> a >> b;
        firsthalf.push_back(make_pair(a,b));
    }
     for(int i=n/2; i<n; i++) {
        int a, b;
        cin >> a >> b;
        secondhalf.push_back(make_pair(a,b));
    }
   
    f(firsthalf, 0, 0, 0, 0,  sizes, keys1, true);
    f(secondhalf, 0, 0, 0, 0, sizes, keys2, true);
    for(int i=0; i<n/2+2; i++) {
        map<pair<int, int>, int>::iterator it = keys1[i].begin();
        while(it!=keys1[i].end()) {
            
            pair<int, int> p = it->first;

            int count = it->second;
            for(int j=0; j<n/2+2; j++) {
               if(keys2[j][make_pair(targetx-p.first,targety-p.second)]!=0) {
                   sizes[i+j]+=count*keys2[j][make_pair(targetx-p.first,targety-p.second)];
                  
               }
            }
            it++;
        }
    }
    for(int i=1; i<=n; i++) {
        cout << sizes[i] << "\n";
    }
}
