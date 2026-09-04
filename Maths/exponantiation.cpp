#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;
int exp(int a, int b) {
    // Corrected base cases
    if (b == 0) return 1;
    if (a == 0) return 0;
    
    int res = exp(a, b / 2);
    res = (res * res) % mod;
    
    if (b & 1) {
        res = (res * (a % mod)) % mod;
    }
    return res;
}
void solve(){
    int a, b;
    cin>>a>>b;
    cout<<exp(a,b)<<endl;
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