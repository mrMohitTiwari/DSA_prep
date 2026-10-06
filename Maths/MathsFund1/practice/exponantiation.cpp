#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int exp(int a, int x, int mod)
{
    int prod = 1;
    int j = a;
    while (x)
    {
        if (x & 1)
            prod = (prod % mod * a % mod) % mod;
        j = j * j;
        x = x / 2;
    }
    return prod;
}
void solve()
{
    int a, b, c, p;
    cin >> a >> b >> c >> p;
    int res = exp(b, c, p - 1);
    int ans = exp(a, res, p);
    cout << exp(0, 0, p) << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}