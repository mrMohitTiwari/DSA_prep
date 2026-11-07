#include <bits/stdc++.h>
using namespace std;
void solve(){
    // we will be using the concept of diffeence array
}
// brute force
void solve2(){
// 11111 2 select window of 2 with highest 0 
int n,k;cin>>n>>k;vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
int cnt=0;for(int i=0;i<n;i++){
    // cout<<"i = "<<i;
    if(a[i]==0 ){ ++cnt;
        for(int j=i;j<min(i+k,n);j++){
            if(i+k>n) break;
            if(a[j]==1) a[j]=0;else a[j]=1;
        }
    }
    // cout<<" string = ";for(int x:a) cout<<x<<" ";cout<<endl;
}
    for(auto x:a) if(x==0) cnt=-1;
    cout<<cnt<<endl;
}
int main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
    solve();
    }
    return 0;
}