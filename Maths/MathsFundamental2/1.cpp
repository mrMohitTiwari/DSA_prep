#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// recursive function to calculate gcd
int gcd(int a ,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int a ,b;
    cin>>a>>b;
        if(a<b) swap(a,b);
        cout<<"gcd of a and b is "<<gcd(a,b)<<endl;
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