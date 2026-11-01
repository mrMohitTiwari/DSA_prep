#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;cin>>n;int mn=n;for(int i=0;i<3;i++){
        int x;cin>>x;mn=min(mn,x);
    }
    cout<<n-mn<<endl;
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