#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> hello;
    for(int i=0; i<5; i++) {
        int a = 0;
        cin >> a;
        hello.push_back(a);
    }
    sort(hello.begin(), hello.end());
    for(int i=0; i<5; i++) {
        cout << hello[i] << "\n";
    }

}