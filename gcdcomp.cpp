    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int t;
        cin >> t;
        while(t--) {
            int n = 0;
            cin >> n;
            vector<int> nums;
            vector<pair<int, int> > evens;
            vector<pair<int, int> > odds;
            for(int i=0; i<2*n; i++) {
                int a = 0;
                cin >> a;
                nums.push_back(a);
                if(a%2==0) {
                    evens.push_back(make_pair(i+1, a));
                }
                else {
                    odds.push_back(make_pair(i+1, a));
                }
            }
            int cnt = 0;
            bool enough = false;
            if(odds.size()>0) {
                for(int i=0; i < odds.size() - 1; i+=2) {
                    if(cnt==n-1) {
                        enough = true;
                        break;
                    }
                    cout << odds[i].first << " " << odds[i+1].first << "\n";
                    cnt++;
                }
            }
            if(enough) {
                continue;
            }
            else {
                for(int i=0; i < evens.size() - 1; i+=2) {
                    if(cnt==n-1) {
                        break;
                    }
                    cout << evens[i].first << " " << evens[i+1].first << "\n";
                    cnt++;
                }
            }
        }
    }