#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s;
    string alpha;
    getline(cin, alpha);
    getline(cin, t);


    ;
    int l = 0;
    bool f = false;
    int w = 0;
    for (int i = 0; i < s.size(); i++)
    {

        f = false;
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i] == t[j])
            {
                l++;
                f = true;
                break;
            }
        }
        if (!f)
        {
            w += (l * (l + 1)) / 2;

            l = 0;
        }


    }
    if (f)
        {
            w += (l * (l + 1)) / 2;


        }
    cout << w << endl;
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