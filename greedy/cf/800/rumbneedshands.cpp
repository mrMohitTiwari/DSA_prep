// https://codeforces.com/problemset/problem/2264/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;cin>>n;vector<int> ans; int x;
    for(int i=1;i<=n;i++) {
           cin>>x;if(x!=i) ans.push_back(x);
    } int an=1;
    for(int i=1;i<ans.size();i++){
        if(ans[i]>ans[i-1]) {an=0;break;}
    }

    if(an) cout<<"yes"<<endl;else cout<<"no"<<endl;
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