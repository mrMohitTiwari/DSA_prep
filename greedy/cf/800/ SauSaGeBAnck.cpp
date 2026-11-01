// https://codeforces.com/problemset/problem/2269/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long
int power2[31];
void pre(){
power2[0]=1;for(int i=1;i<31;i++) power2[i]=power2[i-1]*2;
}
void solve(){
    int n,k;cin>>n>>k;
    int ans = 2*(k-1)+power2[n-k+1];
    cout<<ans<<endl;
    
}
signed main() {
    // Fast I/O Magic Spell
    pre();
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