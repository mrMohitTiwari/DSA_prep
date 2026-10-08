// Array size N < 105, values A[i] ≤ 105. Given an array, how many pairs (i, j) with i < j exist such that A[i] == A[j]? (Hint: think in terms of
// frequency counting.)
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n ;
    cin>>n;
    vector<int> a(n);
    vector<int> f(100000,0);
    for(int i =0;i<n;i++)
    cin>>a[i];
    // counting total number of paris first mapping them
    for(int x:a)
    f[x]++; int ans=0;
    for(int x:f)
    {
        if(x>1) {
            ans += (x*(x-1))/2;
        }
    }
    cout<<ans<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t=1;
    // cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}