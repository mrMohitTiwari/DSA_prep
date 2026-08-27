#include <bits/stdc++.h>
using namespace std;
// function which will decide what to print in the given cell of the canvas
void printChar(int r, int c, int i, int j)
{
    if (i + j >= 4 && i >= j + (r - c))
        cout << "* ";

    else
        cout << "  ";
}
void solve()
{
    int r = 5, c = 9;
    // cin >> r >> c;
    cout << "\n";
    cout << "\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printChar(r, c, i, j);
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
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