#include <bits/stdc++.h>
using namespace std;
void print(int n, int i, int j,int k)
{
    if (i + j >= n-1 && i>=j-n+1)
        cout <<k;
    else
        cout << " ";
}
void solve()
{
    int n ;
    cin>>n;
    int c = 2*n-1;
    for (int i = 0; i < n; i++)
    {
            int k =1;
        for (int j = 0; j < c; j++)
        {
            // print(n, i, j,k);

             if (i + j >= n-1 && i>=j-n+1)
      {  cout <<k<<" ";
            if(j<c/2) k++;
            else k--;
      }
    else
        cout << "  ";

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
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}