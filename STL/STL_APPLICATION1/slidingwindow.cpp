#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// sliding window find the first min element of each window k
void solve()
{
    vector<int> a = {1,5,7,9,3,10,23};
    int k;
    cin >> k;
    multiset<int> m;
    for (int i = 0; i < a.size(); i++)
    {
        m.insert(a[i]);
        if (i - k >= 0)
            m.erase(m.find(a[i-k]));
        if (m.size() == k)
            cout << *m.begin() << endl;
    }
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}