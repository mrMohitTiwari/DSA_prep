#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    string s;
    getline(cin, s);
    int i = s.find('?') + 1; // finding the pos of i and incrementing by one
    while (i < s.size())
    {
        if (s[i] != '=')
        {
            cout << s[i];
            i++;
        }
        else
        {
            cout << ": ";
            i++;
        }

        if (s[i] == '&')
        {
            cout << "\n";
            i++;
        }
    }
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