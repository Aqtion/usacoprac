#include <bits/stdc++.h>
using namespace std;

int minx, miny = 1E9;
int maxx, maxy = -1E9;
int numones = 0;
int n, m;
bool check(int x, int y) {
    return (x>=0 && y>=0 && x<n && y<m);
}
void ff(int x, int y, vector<vector<bool> > &visited, vector<vector<int> > &grid) {
    if(!check(x,y) || grid[x][y]==0 || visited[x][y]) {
        return;
    }
    visited[x][y] = true;
    numones++;
    minx = min(minx, x);
    miny = min(miny, y);
    maxx = max(maxx, x);
    maxy = max(maxy, y);
    ff(x+1, y, visited, grid);
    ff(x, y+1, visited, grid);
    ff(x-1, y, visited, grid);
    ff(x, y-1, visited, grid);

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<vector<int> > grid;
        for(int i=0; i<n; i++) {
            string s;
            vector<int> temp;
            grid.push_back(temp);
            cin >> s;
            for(int j=0; j<m; j++) {
                grid[i].push_back(s[j]-'0');
            }
        }
        vector<vector<bool> > visited;
        for(int i=0; i<n; i++) {
            vector<bool> temp;
            for(int j=0; j<m; j++) {
                temp.push_back(false);
            }

            visited.push_back(temp);
        }
        bool bad = false;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j]==1 && !visited[i][j]) {
                    maxx = -1E9;
                    maxy = -1E9;
                    minx = 1E9;
                    miny = 1E9;
                    numones = 0;
                    ff(i, j, visited, grid);
                    if(numones != (maxx-minx+1)*(maxy-miny+1)) {
                        bad = true;
                        break;
                    }
                }
            }
            if(bad) {
                break;
            }
        }
        if(bad) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
        cout << "\n";

    }
}