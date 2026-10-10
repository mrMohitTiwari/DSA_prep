#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MAX = 1e7 + 1;
bool isPrime[MAX];

void precompute()
{
    fill(isPrime, isPrime + MAX, true);
    for (int i = 2; i < MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < MAX; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
}
void solve()
{
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