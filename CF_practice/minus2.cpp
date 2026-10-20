#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
    int n ; int x; int sgn1,sgn2,sgn3;sgn1=sgn2=sgn3=0;
    cin>>n;for(int i =0;i<n;i++){
        cin>>x;
        if(x&1) sgn1++;
        else{
            int y =x/2;
            if(y&1) sgn2++;else sgn3++;
        }

    }
   cout<<max({sgn1,sgn2,sgn3})<<endl;
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