#include <bits/stdc++.h>
using namespace std;
#define int long long
int exp(int a, int b, int mod)
{
    // Corrected base cases
    if (b == 0)
        return 1;
    if (a == 0)
        return 0;

    int res = exp(a, b / 2, mod);
    res = (res * res) % mod;

    if (b & 1)
    {
        res = (res * (a % mod)) % mod;
    }
    return res;
}
int sol(int a, int b, int c, int p)
{
    if (a == 0 || p - 1 == 0)
        return 0;
    if (!b && c)
        return 1;
    if (b && !c)
        return a;
    if (a && b && c && !(a % p))
        return 0;
    // using ferment's little thm
    int ans = exp(b, c, p - 1);

}
void solve()
{
    int a, b, c, p;
    cin >> a >> b >> c >> p;
        
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