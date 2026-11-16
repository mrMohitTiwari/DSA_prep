#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int a,b,c;cin>>a>>b>>c;
    if(a+b==c||b+c==a||a+c==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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