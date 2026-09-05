#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9+7;
int exp(int a,int x)
{
    int j = a%mod;int prod = 1;
    while(x){
        if(x%2) prod = (prod%mod*j%mod)%mod;
        j= (j%mod*j%mod)%mod;
    x = x/2;
    }
    
    return prod;
}
void solve(){
int n ;
cin>>n;
int tot ,vow,con;
tot = exp(26,n);
vow = exp(5,n);
con = exp(21,n);
int ans = ((tot - con)%mod-vow%mod)%mod;
// if(ans<0) cout<<ans+mod<<endl;
// else
cout<<(ans+mod)%mod<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
    solve();
    }
    return 0;
}