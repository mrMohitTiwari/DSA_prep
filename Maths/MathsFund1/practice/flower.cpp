#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    int mn = INT_MAX;
    int mx = INT_MIN;
    int mxc = 1, mnc = 1;
    for (int x : a)
    {
        if (x == mx)
            mxc++;
        if (x == mn)
            mnc++;
        if (x > mx)
        {
            mxc = 1;
            mx = max(mx, x);
        }
        if (mn > x)

        {
            mnc = 1;
            mn = min(mn, x);
        }
    }
    if(abs(mn-mx)==0) {
        cout<<0<<" "<<(n*(n-1))/2<<endl;
        return;
    }
 
    cout << abs(mn - mx) << " " << mnc*mxc << endl;

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