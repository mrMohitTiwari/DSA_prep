#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int cnt = 0;
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s; 
        bool f=0;int j;
        for(int i=0;i<n;)
        {f=0;
            for( j=i;j<min(i+k,n);j++)
            {
                if(s[j]=='0') f=1;
            } if(!f) {++cnt;f=1;}
            i =j;
        }

    cout << cnt << endl;
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