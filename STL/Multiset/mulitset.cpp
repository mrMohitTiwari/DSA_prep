#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(29);
    ms.insert(10);
    ms.insert(19);
    ms.insert(10);
    for(auto x:ms) cout<<x<<" ";
        // ms.erase(10);
        // deleting only 1 instance
        auto it = ms.find(10);
        ms.erase(it);
        cout<<endl;
    for(auto x:ms) cout<<x<<" ";
        cout<<endl;
    cout<<ms.count(10);


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