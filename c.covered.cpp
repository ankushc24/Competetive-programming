#include<iostream>
#include<deque>
#include<map>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;
        string last_str = "";
        map<char, int> freq;
        int cnt = 0;

        for (int i = 0; i < m; i++) {
            freq[s[i]]++;
            if (freq.size() == k) {
                last_str.push_back(s[i]);
                freq.clear();
                cnt++;
            }
        }

        if (cnt >= n) {
            cout << "YES";
        } 
        else {
            for (int i = 0; i < k; i++) {
                char x = 'a' + i;
                if (freq.find(x) == freq.end()) {
                    last_str.push_back(x);
                    break;
                }
            }

            while (last_str.size() != n) {
                last_str.push_back('a');
            }

            cout << "NO" << endl;
            cout << last_str;
        }

        cout << endl;
    }

    return 0;
}
