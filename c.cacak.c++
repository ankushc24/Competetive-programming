#include <bits/stdc++.h>
using namespace std;
#define int long long



int main()
{



    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
    int n, k, x;
    cin >> n >> k >> x;
    int mina = k * (k + 1) / 2;
    int maxa = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
    if (x >= mina && x <= maxa)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    }
    return 0;
}
