#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9+7;
int exp(int a ,int x)
{
    int prod =1;
    int j =a;
    while(x){
        if(x&1) prod = ((prod%mod)*(j%mod)%mod);
        j = ((j%mod)*(j%mod))%mod;
        x = x/2;
    }
    return prod;
}
int inv(int a){
    return exp(a,mod-2);
}
void solve(){
// int a ,b,c,d,e,f,g,h;
// cin>>a>>b>>c>>d>>e>>f>>g>>h;
// // cal a^b-c
// int ans = ((exp(a,b)%mod )-c%mod+mod)%mod;
cout<<inv(4 );


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