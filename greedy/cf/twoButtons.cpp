#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << 0 << endl;
        return;
    }
    if (n > m)
    {
        cout << n - m << endl;
        return;
    }
    int opr = 0;
    while (m>n)
    {
        if (m & 1)
        {
            ++opr;
            ++m;
        }
        else
        {
            ++opr;
            m /= 2;
        };
    }
    if(n>m) opr+=n-m;
    cout << opr << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}