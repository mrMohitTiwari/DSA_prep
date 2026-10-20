// easy solution
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int d = y - x; // it will remain consitent in any month and employee
    int limit = min(k, d - x + 1);
    int ans = 0;
    int temp = x;
    for (int i = 1; i <= limit; i++)
    {

        ans += d % temp++;
    }
    if (x > d)
    {
        ans += d * k;
    }
    else if (k > d - x + 1)
    {
        ans += d * (k - (d - x + 1));
    }
    cout << ans << endl;
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

// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// void solve(){
//     int emp , pj,mnt;
//     cin>>emp>>pj>>mnt; int ans=0;
//     for(int i =0;i<mnt;i++){
//         ans += pj%emp;
//         pj++;emp++;
//     }
//     cout<<ans<<endl;
// }
// signed main() {
//     // Fast I/O Magic Spell
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     // Now you can take input safely
//     int _t=1;
//     cin >> _t;
//     for(int i=0;i<_t;i++){
//     solve();
//     }
//     return 0;
// }