#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,m,x,y;cin>>n>>m>>x>>y; int z;
  for(int i=0;i<n;i++)
  cin>>z;for(int i=0;i<m;i++)
  cin>>z;
    cout<<n+m<<endl;
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