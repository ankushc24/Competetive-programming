#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 998244353;

ll greatestCommonDivisor(ll a, ll b)
{
    if (b == 0)
        return a;
    return greatestCommonDivisor(b, a % b);
}

ll factorial(ll n)
{
    if (n >= MOD)
        return 0;

    ll result = 1;
    for (ll i = 1; i <= n; i++)
        result = (result * i) % MOD;

    return result;
}

void process()
{
    string input;
    cin >> input;
    ll length = input.size();
    ll onesCount = 0;
    ll zerosCount = 0;
    vector<ll> onesGroup;
    
    for (ll i = 0; i < length; i++)
    {
        if (input[i] == '1')
        {
            onesCount++;
        }
        else
        {
            if (onesCount)
            {
                onesGroup.push_back(onesCount);
            }
            onesCount = 0;
        }
    }
    
    if (onesCount)
    {
        onesGroup.push_back(onesCount);
    }
    
    vector<ll> zerosGroup;
    onesCount = 0;
    
    for (ll i = 0; i < length; i++)
    {
        if (input[i] == '0')
        {
            onesCount++;
        }
        else
        {
            if (onesCount)
            {
                zerosGroup.push_back(onesCount);
                onesCount = 0;
            }
        }
    }
    
    if (onesCount)
    {
        zerosGroup.push_back(onesCount);
    }
    
    ll result1 = 0;
    ll result2 = 1;
    
    for (auto len : onesGroup)
    {
        (result1 += (len - 1)) %= MOD;
        (result2 *= len) %= MOD;
    }
    
    for (auto len : zerosGroup)
    {
        (result1 += (len - 1)) %= MOD;
        (result2 *= len) %= MOD;
    }
    
    result2 *= factorial(result1);
    result2 %= MOD;
    
    cout << result1 << " " << result2 << endl;
}

int main()
{
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        process();
    }
    return 0;
}
