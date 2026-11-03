#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
            s += a[i - 1] - a[i];
    }
    cout << s << endl;
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