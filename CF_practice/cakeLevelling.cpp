#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;int a[n];for(int i=0;i<n;i++) cin>>a[i];
    int s=a[0];
    for(int i=1;i<n;i++) {
        s+=a[i];
        a[i] = min((s/(i+1)),a[i-1]);
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";cout<<endl;
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