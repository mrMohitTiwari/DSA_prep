#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int maxn = 1000000;
int spf[maxn + 1];
int countSign[maxn + 1];
void precompute()
{
    for (int i = 2; i <= maxn; i++)
    {
        if (spf[i] == 0)
        {
            for (int j = i; j <= maxn; j += i)
            {
                if (spf[j] == 0)
                    spf[j] = i;
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int sign = 1;
        int comp = 1;
        int x = a;
        while (x > 1)
        {
            int p = spf[x];
            int e = 0;
            while (x % p == 0)
            {

                x /= p;
                e++;
            }
            e %= 3;
            if (e ==1)
            {
                sign *= p;
                comp *= (long long)p * p;
            }
            else if (e == 2)
            {
                sign *= p * p;
                comp *= p;
            }
           
    }
     if (comp < maxn + 1)
                ans += countSign[comp];
            countSign[sign]++;
        }
    cout << ans << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();

    solve();

    return 0;
}