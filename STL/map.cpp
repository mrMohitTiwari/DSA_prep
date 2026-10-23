#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    // for orderd map key will be in sorted order
    map<string,int> mp;
    mp["mohit"] = 23;
    mp["bittu"]=24;
     mp["kittu"] = 23;
    mp["mittu"]=24;
    for(auto x:mp)
    {cout<<x.first<<" -> "<<x.second<<endl;}
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