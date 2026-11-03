#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<pair<int, int>> sum(n);
    sort(sum.begin(), sum.end(), [](pair<int, int> a, pair<int, int> b)
         { return (a.first + a.second) > (b.first + b.second); });
    int sa = 0;
    int sb = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            sb += sum[i].second;
        else
            sa += sum[i].first;
    }
    cout << sa << " " << sb << endl;

    if (sa > sb)
        cout << "Alice" << endl;
    else if (sa == sb)
        cout << "Tie" << endl;
    else
        cout << "Bob" << endl;
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