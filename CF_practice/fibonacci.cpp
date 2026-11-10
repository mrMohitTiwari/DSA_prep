#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int fib[48];
void precompute()
{
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 48; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
void solve()
{
    int k;
    cin >> k;
    int cnt = 0;
    for (int i = 47; i >= 0; i--)
    {
        if ((fib[i] <= k) && k > 0)
        {
            k = k - fib[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    // Now you can take input safely
    int _t = 1;
    cin >> _t;

    for (int i = 0; i < _t; i++)
    {
        solve();
    }
    return 0;
}