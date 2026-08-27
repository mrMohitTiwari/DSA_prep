#include <bits/stdc++.h>
using namespace std;
// function which will decide what to print in the given cell of the canvas
void printChar(int r, int c, int i, int j)
{
// concept of slant linr
// if slant line in diagonal    
// if(i==j) cout<<"* ";
// else cout<<". ";
// shifting the line by 1 unit
// subtracting some constant from j will shift diagonal line upward and addition downward
if(i==j-2) cout<<"* ";

else cout<<". ";
/*
whichever line you want just write i = j+c and pass the co-ordinate of the cell where line is cutting and get c and use the value
if we will use i < j+c then it will shade the full region of that < side
*/
}
void solve()
{
    int r = 5, c = 5;
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