#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int a[1000010];
int n ;
int check(int mid)
{
    if(mid==n-1) return 1; //beacuase there is no other elemenet to check
    
    if(a[mid]>=a[mid+1]) return 1;
    return 0;

}
void solve(){
    cin>>n; for(int i =0;i<n;i++) cin>>a[i];
    int l =0;int h =n-1;int ans=-1; 
    while(l<=h){
        int mid=l+(h-l)/2;
        if(check(mid)==1) {ans=mid;h=mid-1;}
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