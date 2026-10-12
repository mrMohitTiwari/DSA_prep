// https://codeforces.com/problemset/problem/2250/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n ;
    cin>>n; 
    int mn=INT_MAX;
    int mx = INT_MIN; int x;
    for(int i =1;i<=n;i++){
        cin>>x;
        if(i&1) mn = min(mn,x);
        else mx = max(mx,x);
    }
    if(mn-mx>=2 &n%2==0) cout<<"yes"<<endl;else cout<<"no"<<endl;
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