#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
long double PI = acos(-1.0);

void solve()
{
    // calculating the area of the circle
    long double r; // we are using long double for ultimate precision
    cin >> r;
    cout << PI * r * r;
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