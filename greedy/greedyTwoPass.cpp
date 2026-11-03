#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n ;cin>>n;vector<int> rat(n);for(int i=0;i<n;i++) cin>>rat[i];
    vector<int> time(n,1);
    // forward pass
    for(int i=1;i<n;i++){
        if(rat[i]>rat[i-1]) time[i]=time[i-1]+1;
    }for(int i=n-1;i>=1;i++){
        if(rat[i]>rat[i-1]) time[i]=time[i-1]+1;
    } int s=0;
    for(int x:time) s+=x;
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