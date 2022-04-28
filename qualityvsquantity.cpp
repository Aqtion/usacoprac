#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n = 0;
        cin >> n;
        vector<long long> nums(n);
        for(int i=0; i<n; i++) {
            int a = 0;
            cin >> a;
            nums[i] = a;
        }
        sort(nums.begin(), nums.end());
        vector <long long> ps(n);
        ps[0] = nums[0];
        for(int i=1; i<n; i++) {
            ps[i] = ps[i-1]+nums[i];
        }
        vector<long long> ss(n);
        ss[0] = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            ss[n-i-1] = (ss[n-i-2]+nums[i]);
        }
        bool good = false;
        for(int i=0; i<n; i++) {
            if(2*i+ 1<n) {
                long long bs = ps[i+1];
                long long rs = ss[i];
                good = (bs<rs);
            }
        }   
        if(good) cout << "YES" << "\n";
        else {
            cout << "NO" << "\n";
        }
    }
}