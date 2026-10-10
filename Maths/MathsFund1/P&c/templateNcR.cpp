#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MAXN = 1000000;
int fact[MAXN+1];
int invFact[MAXN+1];
const int mod = 1e9+7;
// exponential function
int binExp(int a,int x)
{
    int j =a;int prod=1;
    while(x){
        if(x&1) prod = ((prod)%mod*(j%mod))%mod;
        j= (j%mod*j%mod)%mod;
        x=x/2;
    }
    return prod;
}
int inv(int n)
{
    return binExp(n,mod-2);
}
void precompute()
{
    fact[0]=1;
    for(int i =1;i<=MAXN;i++)
    fact[i]=(fact[i-1]*i)%mod;
    // for inverse
    invFact[MAXN] = inv(fact[MAXN]);
    for(int i =MAXN;i>=1;i--){
        invFact[i-1] = ((invFact[i]%mod)*(i)%mod)%mod;
    }
}
int ncr(int n ,int r)
{   if(r<0||r>n) return 0;
        int ans = fact[n];
            ans=(ans*invFact[r])%mod;
            ans=(ans*invFact[n-r])%mod;
            return ans;
}
void solve(){
    cout<<ncr(10,2);
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    precompute();
    int _t=1;
    // cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}