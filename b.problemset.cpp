#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    for(int k=0;k<test;k++) {
        int x, n;
        cin >> x;
        cin>>n;

        int store = x / n;
        set<int> s;
        int num=sqrt(x);
        for (int i = 1; i <=num ; i++) {
            if (x % i == 0) {
                s.insert(i);
                s.insert(x / i);
            }
        }

        auto it = s.lower_bound(store);
        if (*it > store) {
            it--;
        }
        int ans=*it;
        cout << ans;
        cout<<endl;
    }

    return 0;
}
