#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,m;cin>>n>>m;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    int p =0;int f=0;int curr=0; int ans=0;
    for(auto x:v){
            curr = x.first;
            int temp = curr -p-1;
            ans+=temp;
            if(temp&1) {
                f^=1;

            }
                if(f!=x.second) {
                    ++ans;f^=1;
                }
            p=curr;
    }
    if(p<m) ans+=(m-p);
    cout<<ans<<endl;

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