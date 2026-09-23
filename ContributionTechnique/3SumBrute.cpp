#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
                sum += a[i] + a[j] + a[k];
        }
    }
    cout << sum << endl;
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