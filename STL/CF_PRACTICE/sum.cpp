#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
    int n;
    cin >> n;
vector<int> v(n);
for(int i =0;i<n;i++) cin>>v[i];
int s =0; int e = n-1;
while(s<e) swap(v[s++],v[e--]); for(int x :v) cout<<x<<" ";
cout<<endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t = 1;
    for (int i = 0; i < _t; i++)
    {
        solve();
    }
    return 0;
}