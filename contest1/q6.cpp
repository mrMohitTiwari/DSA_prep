#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define int long long
int fact[MAX];
const int mod =1e9+7;
void precomute(){
    fact[0]=1;
    for(int i =1;i<MAX;i++){
        fact[i] = ((i%mod)*(fact[i-1]%mod))%mod;
    }
}
int exp(int a,int x){
    int j =a;int prod =1;
    while(x){
        if(x&1) prod = (prod%mod*j%mod)%mod;
        j = (j%mod*j%mod)%mod;
        x = x/2;
    }
    return prod;
}
int inv(int n){
    return exp(n,mod-2);
}
int ncr(int n ,int r)
{
    if(r==0||r==n) return 1;
        int ans = ((fact[n]*inv(fact[r])%mod)*inv(fact[n-r])%mod)%mod;
        return ans;

}
void solve(){
int n,r;
cin>>n>>r;
if(n>r) cout<<0;
else
cout<<(ncr(n-1,r-1))<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
precomute();
    // Now you can take input safely
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
    solve();
    }
    return 0;
}