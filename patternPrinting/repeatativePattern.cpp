#include <bits/stdc++.h>
using namespace std;
// function which will decide what to print in the given cell of the canvas
void printChar(int r, int c, int i, int j)
{
    if (i + j >= 4 && i >= j - 4)
        cout << "* ";

    else
        cout << "  ";
}
void solve()
{
    int r = 49, c = 49;
    // cin >> r >> c;
    cout << "\n";
    cout << "\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // for repeating it's monomer just modulo the number of col you want to repeat
            printChar(r, c, i%8, j%8);
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