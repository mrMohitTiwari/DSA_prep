#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;cin>>n; int x;bool f1=false; bool f2=false;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1) f1=true;
        if(x==67) f2=true;
        
    }
    if(f2) cout<<"YES"<<endl;else cout<<"NO"<<endl; 
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