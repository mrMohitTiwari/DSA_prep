#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    int st = 0;
    int e = n - 1;
    int ans = 0;
    while (st < e)
    {
        if (s[st] != s[e])
        {
            if (s[st] == ch || s[e] == ch)
                ans++;
            else
                ans += 2;
        }
        st++;
        e--;
    }
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