#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int oddPart(int x)
{
    while(x%2==0) x /=2;
    return x;
}
void solve(){
    int n;cin>>n;int x;bool f=true;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(oddPart(x)!=oddPart(i)) {f=false;}

    }
    if(f) cout<<"YES"<<endl;else cout<<"NO"<<endl;
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