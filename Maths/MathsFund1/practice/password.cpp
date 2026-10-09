#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// https://codeforces.com/problemset/problem/1743/A
// ncr formula

void solve()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x;
n= 10 - n;
    if (n < 2)
    {
        cout << 0 << endl;
        return;
    }
    int ans = (n * (n - 1)) / 2;
    ans = ans * 6;
    cout << ans << endl;
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