#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod = 1e9 + 7;
const int MAX = 1000000;
int fact[MAX+1];
int invFact[MAX + 1];



    int exp(int a, int x)
    {
        int j = a;
        int prod = 1;
        while (x)
        {
            if (x & 1)

                prod = ((j % mod) * (prod % mod)) % mod;

            j = ((j %mod) * (j % mod)) % mod;
            x = x / 2;
        }
        return prod;
    }
   
int inv(int n)
{
    return (exp(n, mod - 2))%mod;
}
int binomial(int n, int r)
{
        int ans = (fact[n]*invFact[n-r]%mod)%mod;

        ans = (ans*invFact[r])%mod;

        return ans;
}
void precompute()
{
    fact[0] = 1;
    for (int i = 1; i <= MAX; i++)
        fact[i] = ((i % mod) * fact[i - 1] % mod) % mod;
        invFact[MAX] = exp(fact[MAX], mod - 2);

    // Compute inverse factorials
    for (int i = MAX; i >= 1; i--)
        invFact[i - 1] = invFact[i] * i % mod;
}
void solve()
{
    int n, r;
    // cin>>n>>r;
    // cout<<binomial(n,r)<<endl;
    cout<<inv(2)<<endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    // Now you can take input safely
    int _t = 1;
    // cin >> _t;
    for (int i = 0; i < _t; i++)
    {
        solve();
    }
    return 0;
}