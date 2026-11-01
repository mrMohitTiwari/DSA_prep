#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
    int a ,b;cin>>a>>b;
    if(a==b||((a%b)==0&&a>b)) {cout<<0<<endl;
    return ;
    }else if(a<b) {cout<<b-a<<endl;return;}else{
        int ans = a%b;
        ans = b-ans;
        cout<<ans<<endl;
    }

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