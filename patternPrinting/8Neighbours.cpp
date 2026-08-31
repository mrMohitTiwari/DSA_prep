#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    // logic here 
    bool f = true;
    int x, y;
    cin >> x >> y;x--;y--;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(i==x-1||i==x+1||j==y-1||j==y+1){
                if(a[i][j]!='x') {
                    f=0;
                    cout<<"no\n";
                }
            }
        }
    }
if(f) cout<<"yes\n";

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