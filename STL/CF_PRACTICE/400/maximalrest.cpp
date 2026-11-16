#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int a[n ];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int win = 0;
   

    int mx = 0;
// counting 1's from begining

    for (int i = 0; i <2* n; i++)
    {
        if(i>n&&a[i%n]==0)  break;
        if (a[i%n] == 1 )
        {
            ++win;
            

            mx = max(mx, win);
        }
        else
            win = 0;
    }
    cout << mx << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t = 1;
    // cin >> _t;
    for (int i = 0; i < _t; i++)
    {
        solve();
    }
    return 0;
}