#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string st;
    cin >> st;
    // flag for encountering '='
    bool f = true;
    int ans = 0;
    for (int i = 0; i < st.size(); i++)
    {
        cout<<"sum at "<<i<<"th step = "<<ans<<endl;
        if (st[i] == '=')
            f = false;
        if (f)
        {
            if(st[0]=='X') continue;
            if (i == 0 && isdigit(st[i]))
                ans += st[i] - '0';
            else if (st[i - 1] == '-' && isdigit(st[i]))
                ans -= st[i] - '0';
            else if (isdigit(st[i]))
                ans += st[i] - '0';

        }
        else 
        {
            if (st[i - 1] == '=' && isdigit(st[i]))
                ans -= st[i] - '0';
            if (st[i - 1] == '+' && isdigit(st[i]))
                ans -= st[i] - '0';
                else if(st[i-1]=='-'&&isdigit(st[i])) ans+=st[i]-'0';
        }
    }
    cout << -ans;
}
int main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}