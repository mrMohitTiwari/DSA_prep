#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> cookie(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> cookie[i];
        sum += cookie[i];
    }
    int ans;
    sort(cookie.begin(), cookie.end());
    int m = sum - cookie[n - 1]; // cookie in the remaing bag
    if (cookie[n - 1] >= sum)
        ans = cookie[n - 1] - m;
    else
    {
        ans = (sum - cookie[n - 1]) % 2;
    }
    cout<<m<<" "<<m<<" "<<n<<endl;
    cout << ans << endl;
}
signed main()
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