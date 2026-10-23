#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
void solve(){
    int n ,d;cin>>n>>d; int ans=0;
    int a[n];for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<n;i++)
    {
        auto it = upper_bound(a+i,a+n,a[i]+d)-a; //now it will give index
       int cnt = it - i -1; //1 bcz both ends are not inclusive
        ans += (cnt*(cnt-1))/2;

    }
    cout<<ans<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}