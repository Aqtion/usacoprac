#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for(int i=0; i<n; i++) {
            int num;
            cin >> num;
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
        vector<long long> ans(n);
        int last = n-1;
        int i=0;
        int j = n-1;
        while(i<j) {
            ans[last] = nums[j];
            last--;
            j--;
            ans[last] = nums[i];
            last--;
            i++;
        }
        if(i==j) {
            ans[0] = nums[i];
        }
        for(int i=0; i<n; i++) {
            cout << ans[i] << " "; 
        }
        cout << "\n";

    }
}