#include <bits/stdc++.h>
using namespace std;
void print(int n, int i, int j)
{
    if ((i >= j))
    {
        cout << "*";
    }
    else
        cout << ".";
}
void solve()
{
    int n = 5;
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            print(n, i, j);
        }
        cout << "\n";
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
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
