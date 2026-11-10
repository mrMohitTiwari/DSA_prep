#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve()
{
    int x, y;
    cin >> x >> y;
    int opr = -1;
    int ct=0;
    int mx = x + y;
    if(x%2==0&&y%2==1) opr =0;
    if(x%2==1&&y%2==0) opr =1;

    int t = min(x,y);
    if(opr==-1){
        while(t){
            ct++;
            x-=1;
            y+=1;

            if(x^y==mx) break;
        }
        opr=ct;
    }
    cout <<mx << " "<<opr << endl;
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