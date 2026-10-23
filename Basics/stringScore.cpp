#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sc = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'V')
            sc += 5;
        else if (s[i] == 'W')
            sc += 2;
        else if (s[i] == 'X')
            i++;

        else if (s[i] == 'Y' && i < n)
            swap(s[i], s[s.size() - 1]);
        else if (s[i] == 'Z')
        {
            if (i + 1 < n)
            {
                if (s[i + 1] == 'V')
                {
                    sc /= 5;
                    i++;
                }
                else if (s[i + 1] == 'W')
                {
                    sc /= 2;
                    i++;
                }
            }
        }
    }
    cout << sc << '\n';
}
int main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}