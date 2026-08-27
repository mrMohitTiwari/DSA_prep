#include <bits/stdc++.h>
using namespace std;
// function which will decide what to print in the given cell of the canvas
void printChar(int r, int c, int i, int j)
{
    // if(j==0  || j==c-1 ||i==(r/2-1) && j<=c-1) cout<<"* ";
    if (j == 0 || j==c-1 || (i == (r/2)))
        cout << "* ";
    else
        cout << " ";
}
void printCharI(int r, int c, int i, int j)
{
    // if(j==0  || j==c-1 ||i==(r/2-1) && j<=c-1) cout<<"* ";
    if (j == 0 || j==c-1 || (i == (r/2)))
        cout << "* ";
    else
        cout << " ";
}
void solve()
{
    int r = 7, c = 5;
    cin >> r >> c;
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