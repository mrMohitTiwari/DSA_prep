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
//iterative function to find gcd
int gcd2(int a ,int b)
{
    if(b>a) swap(a,b);
    while(b){
        int rem = a%b;
        a =b;
        b=rem;
    }
    return a;
}

void solve(){
    int a ,b;
    cin>>a>>b;
        if(a<b) swap(a,b);
        cout<<"gcd of a and b is "<<gcd2(a,b)<<endl;
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