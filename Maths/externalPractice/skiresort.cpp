#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    int l = 0;
    int w = 0;
    for (int x : a)
    {
        if (x <= q)
            l++;
        else
        {
            if (l >= k)
            {
                w += ((l - k + 2) * (l - k + 1)) / 2;
            }
            l = 0;
        }
    }
    if (l>=k)
    {
        w += ((l - k + 2) * (l - k + 1)) / 2;
    }

    cout << w << endl;
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