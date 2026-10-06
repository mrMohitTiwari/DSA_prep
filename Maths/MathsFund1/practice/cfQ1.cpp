#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int a[] = {8, 4, 2, 6};
    // since cycle is repating after every 4th
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << a[(n-1) % 4] << endl;
    }
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