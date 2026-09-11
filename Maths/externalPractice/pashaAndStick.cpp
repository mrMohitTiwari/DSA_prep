#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
 int n ; cin>>n;
        if(n&1) cout<<0<<endl;
        else if(n%4==0) cout<<(n/4)-1<<endl;
        else cout<<n/4<<endl;
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