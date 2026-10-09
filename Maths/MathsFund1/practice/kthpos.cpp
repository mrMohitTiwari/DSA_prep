// link : https://codeforces.com/problemset/problem/1328/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    string s(n, 'a');
    int fb = 2;
    // her fb-1 shows number of arrangement before k and fb-1 is number of possible group of b
    while (k > fb - 1)
    {
        k -= fb - 1;
        fb++;
    }
    int sb = k;
    s[n - fb] = 'b';
    s[n - sb] = 'b';
    cout << s << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}