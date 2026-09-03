#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define long long int
int exp(int a,int b)
{
    if(a==0||b==0)
    return 1;
    if(b&1) return a*exp(a,b-1);
    return exp(a,b/2)*exp(a,b/2);
}
void solve(){
    int a, b;
    cin>>a>>b;
    cout<<exp(a.b);
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