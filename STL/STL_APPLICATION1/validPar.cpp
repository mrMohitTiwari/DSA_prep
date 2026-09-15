#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool validPar(string st)
{
    // creating the map
    map<char, int> mp;
    mp['('] = 1;
    mp['{'] = 2;
    mp['['] = 3;
    mp[')'] = -1;
    mp['}'] = -2;
    mp[']'] = -3;
    stack<int> stk;
    for (char s : st)
    {
        int val = mp[s];
        if (val > 0)
            stk.push(val);
        else
        {
            if (!stk.empty() && stk.top() + val == 0)
                stk.pop();
            else
            {
                return false;
            }
        }
    }
    if (!stk.empty())
        return false;
    return true;
}
void solve()
{
    string s;
    cin >> s;
    if (validPar(s))
        cout << "valid Parenthesis\n";
    else
        cout << "not valid" << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
  solve();
    return 0;
}