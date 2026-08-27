#include <bits/stdc++.h>
using namespace std;
// buidding the pasacals table
using lli = long long;
#define MAX 10
lli table[MAX][MAX];
void build(int m)
{
    table[0][0] = 1;
    for (int n = 1; n < MAX; n++)
    {
        table[n][0] = 1%m;
        table[n][n]=1%m;
        for (int r = 1; r < n; r++)
        {
            table[n][r] = (table[n - 1][r] + table[n - 1][r - 1]) % m;
        }
    }
}
void solve()
{
        for(int i =0;i<MAX;i++)
        {
            for(int j =0;j<=i;j++)
            {
                cout<<table[i][j]<<" ";
            }
            cout<<"\n";
        }

}
int main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t = 1;
    build(999);
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}