#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    // use of next_permutation
    // let us create a vector and see what will be the next permutation 
    vector<int> v= {1,2,3};
    do{
        for(int x:v) cout<<x<<" ";

    }while(next_permutation(v.begin(),v.end()));
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