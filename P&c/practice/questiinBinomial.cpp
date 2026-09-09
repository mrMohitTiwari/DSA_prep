#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod = 10e9 + 7;
const int MAX = 1000000;
int fact[MAX];
void precompute()
{
    fact[0] = 1;
    for (int i = 0; i < MAX; i++)
        fact[i] = ((i % mod) * fact[i] % mod) % mod;
}
int exp(int a, int x)
{
    int j=a;int prod=1;
    while(x){
        if(x&1){
            prod = ((j%mod)*(prod)%mod)%mod;
            j = (j*mod*j*mod)%mod;
            x=x/2;
        }

    }
}
int inv(int n)
{
    return exp(n,mod-2);
}
int binomial(int n ,int r)
{
    return ((((fact[n])%mod*(inv(fact[r])%mod))%mod*inv(n-r)%mod))%mod;
}
void solve()
{
    int n ,r;
    cin>>n>>r; cout<<binomial(n,r);
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
    cin >> _t;
    for (int i = 0; i < _t; i++)
    {
        solve();
    }
    return 0;
}