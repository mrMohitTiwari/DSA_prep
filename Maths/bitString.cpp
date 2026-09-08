#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod = 1e9+7;
int exp(int a,int x)
{
    int prod =1;
    int j=a;
    while(x){
        if(x&1) j = ((j%mod)*(prod%mod))%mod;
        j =((j%mod)*(j%mod))%mod;
        x=x/2;
    }
    return prod;
}

void solve(){
    int n ;
    cin>>n;
    cout<<exp(2,n)<<endl;

}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t=1;
    cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}