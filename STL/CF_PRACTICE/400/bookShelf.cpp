#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;cin>>n;vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
sort(a.begin(),a.end()); int bookSeen=0;
for(int i=0;i<n;i++) {
    bookSeen += i<2||a[i]!=a[i-2];
}
cout<<bookSeen<<endl;
for(int i=0;i<n;i++)
{
    if(i==0||a[i]!=a[i-1]) cout<<a[i]<<" ";
}
for(int i=n-1;i>=1;i--)
{
    if(a[i]==a[i-1]) cout<<a[i]<<" ";
}
cout<<endl;
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