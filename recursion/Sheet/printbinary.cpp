#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void print(int n){
    if(n<10){ cout<<n%2<<endl; return;}
    cout<<n%2;
    print(n/2);
    

}
void solve(){
    int n;cin>>n;print(n);

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