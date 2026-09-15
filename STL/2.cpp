#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    // here will know how to use min_element() algo
    vector<int> v = {1, 2, 3, 45, 0, -1};
    auto it = min_element(v.begin(), v.end());
    cout << *it << endl;            // will give min element
    cout << it - v.begin() << endl; // it will return the index
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