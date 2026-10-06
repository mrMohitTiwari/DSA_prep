// Question Link : https://codeforces.com/problemset/problem/478/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n ,m;
    cin>>n>>m; 
    if(n<m) {cout<<0<<" "<<0<<endl;return;}
    int mn,mx; int a = n/m;int b=n%m; mx= (n-m+1)*(n-m)/2;
    
    mn = b*(a*(a+1))/2 + (m-b)*((a*(a-1))/2);
       
        cout<<mn<<" "<<mx<<endl;
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