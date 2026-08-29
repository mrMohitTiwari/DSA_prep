#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
vector<int> a(n);
int mx = a[0];
int mn = a[0];
int x=0,j=0;
for(int i =0;i<n;i++){
    cin>>a[i];
       if(mx<a[i]) {
         x = i;
       }
        if(mn>a[i]) {
         j = i;
       }
}
swap(a[x],a[j]);
for(int x:a) cout<<x<<" ";
cout<<"\n";
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