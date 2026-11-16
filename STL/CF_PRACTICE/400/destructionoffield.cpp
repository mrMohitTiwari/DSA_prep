#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
    int n; vector<int> odd;
    int mxODD = INT_MIN;
    int es =0;
    cin>>n;int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0)
         es+=x;else odd.push_back(x);
    }
        sort(odd.begin(),odd.end()); bool f=true; bool light=0; n = odd.size();
        if(n>1) 
    
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