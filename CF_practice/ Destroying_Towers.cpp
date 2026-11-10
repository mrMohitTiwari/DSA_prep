#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;cin>>n;int a[n];for(int i=0;i<n;i++) cin>>a[i];
    int tar=a[0]; int s=tar;
    int i=1;while(i<n){
        if(a[i]>=tar) s+=tar;
        else {
            tar=a[i];
            s +=tar;
        }
        i++;
    }
    cout<<s<<endl;
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