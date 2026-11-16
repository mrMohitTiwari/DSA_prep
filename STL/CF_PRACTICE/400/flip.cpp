#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;cin>>n;string s;
    cin>>s;
    bool f=1;int cnt=0;
    for(auto x :s)

    {  
int y;
       if(x=='R') y=1;else y=0;
        if(f==y) f=f^1;
        else cnt++;

    }
    cout<<cnt<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t ;cin>>t;
    while(t--)
    solve();

    return 0;
}