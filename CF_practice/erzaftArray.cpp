// https://codeforces.com/problemset/problem/2246/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
    int n ;
    cin>>n;
    if(n==1) {cout<<1<<endl; return ;}
    if(n==2) {cout<<-1<<endl;return;}
    cout<<"1 2 3";
    int x =3;
    for(int i=4;i<=n;i++) {
        x *=2;
        cout<<" "<<x;
    }
    cout<<endl;


    


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