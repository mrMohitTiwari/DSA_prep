#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
typedef vector<int> vt;
bool check(vt &v, int time, int t)
{
    int prod = 0;
    for (int x : v)
    {
        prod += time/x;
        if (prod >= t)
            return true;
    }
    return prod >= t;
}
void solve()
{
    int n, t;
    cin >> n >> t;
   vt a(n);
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    int l = 1;
    int h = mn * t;
    int ans = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (check(a, mid, t))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}