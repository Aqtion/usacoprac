#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > grid;
        int num = 0;
        for(int i=0; i<n; i++) {
            vector<int> temp;
            string s;
            grid.push_back(temp);
            cin >> s;
            for(int j=0; j<m; j++) {
                grid[i].push_back(s[j]-'0');
                if(s[j]-'0'==1) {
                    num++;
                }
            }
        }
        if(grid[0][0]==1) {
            cout << -1 << "\n";
            continue;
        }
        cout << num << "\n";
        for(int i=n-1; i>=0; i--) {
            for(int j=m-1; j>=0; j--) {
                if(grid[i][j]==1 && i>=1) {
                   cout << i << " " << j+1 << " " << i+1 << " " << j+1 << "\n";
                }
                else if(grid[i][j]==1 && i>=0) {
                    cout << i+1 << " " << j << " " << i+1 << " " << j+1 << "\n";
                }
            }
        }

    }
}