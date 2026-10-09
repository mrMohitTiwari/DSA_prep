#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod = 998244353;

void solve(){
    int n ;cin>>n;
    string s;
    cin>>s; int cnt1=0;int cnt2=0; int ans; char f = s[0];
    char l = s[n-1];
    for(int i =0;i<n;i++){
        // how many are equal from start
        if(s[i]==f) cnt1++;else break;

    }
    for(int i = n-1;i>0;i--)
    {
        if(s[i]==l)
        cnt2++;
        else break;
    }
    if(s[0]!=s[n-1]){
        ans = (((cnt1)%mod+(cnt2)%mod)%mod+1)%mod;
    }else ans = (((cnt1)%mod+1%mod)*((cnt2)%mod+1)%mod)%mod;
    cout<<ans<<endl;;

}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t=1;
    // cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}