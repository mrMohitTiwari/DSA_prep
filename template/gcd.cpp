#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
int gcd(int a,int b){
    if(b>a) swap(a,b);
    while(!b) {
        int rem = a%b;
        a = b;
        b = rem;

    }
    return b;
}
void solve(){
    cout<<gcd(0,100);
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    solve();

    return 0;
}