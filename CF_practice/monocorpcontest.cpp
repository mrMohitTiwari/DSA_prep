#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n ;cin>>n;int a[n];int cnt=0;for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) cnt++;
    }
    if(a[0]==0&&a[n-1]==0) {cout<<0<<endl;return;}
        if((a[0]==0||a[n-1]==0)&&cnt>=2) {cout<<1<<endl;return;}
            if(cnt>=2) {cout<<2<<endl;return;
            }
            cout<<-1<<endl;

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