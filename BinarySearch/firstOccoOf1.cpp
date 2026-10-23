#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n ;cin>>n;vector<int> a(n); for(int i =0;i<n;i++) cin>>a[i];
    int l =0;int h =n-1;int ans=-1; 
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==1) {ans=mid;h=mid-1;}
       else l=mid+1;
    }
    cout<<ans<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
solve();
    return 0;
}