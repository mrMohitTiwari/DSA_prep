// https://codeforces.com/problemset/problem/629/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n ;
    cin>>n;
    char a[101][101];
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++)
        cin>>a[i][j];
    }
        int ans=0;int rc=0;
        int cc=0;
      for(int i=0;i<n;i++){
        for(int j =0;j<n;j++)
            if(a[i][j]=='C') ++rc;

            ans += (rc*(rc-1))/2;
            rc=0;
    }
      for(int i=0;i<n;i++){
        for(int j =0;j<n;j++)
         if(a[j][i]=='C') ++cc;

            ans += (cc*(cc-1))/2;
            cc=0;
    }
    cout<<ans<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        solve();
    
    return 0;
}