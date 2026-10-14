#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


void solve(){
    int n ;
    vector<int> v;
    cin>>n;



    for(int i =1;i*i<=n;i++){
        if(n%i==0) {cout<<i<<endl;
        if(n/i!=i) v.push_back(n/i);
        }
        
      
    }
    sort(v.begin(),v.end());
    for(int a:v) cout<<a<<endl;
     
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}