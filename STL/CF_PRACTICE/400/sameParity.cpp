#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    if (((n - (k - 1)) > 0 )&& ((n-(k-1)) & 1))
    {
        cout << "YES" << endl;
        for (int i = 1; i <= k - 1; i++)
            cout << 1 << " ";
        cout << n - (k - 1) << endl;
    }
    else if (n - (2 * (k - 1)) > 0 && ((n-2*(k-1)) % 2 == 0))
    {
        {
            cout << "YES" << endl;
            for (int i = 1; i <= (k - 1); i++)
                cout << 2 << " ";
            cout << n - (2 * (k - 1)) << endl;
        }
    }
    else
        cout << "NO" << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t = 1;
    cin >> _t;
    for (int i = 0; i < _t; i++)
    {
        solve();
    }
    return 0;
}