#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// creating a monotonic deque
struct monotonic_dq
{
    deque<int> dq;
    void insert(int x)
    {
        while (!dq.empty() && dq.back() > x)
            dq.pop_back();
        dq.push_back(x);
    }
    void erase(int x)
    {
        if (dq.front() == x)
            dq.pop_front();
    }
    int getmin()
    {
        return dq.front();
    }
};

void solve()
{
    vector<int> a = {1, 5, 7, 9, 3, 10, 23};
    int k;
    cin >> k;
    multiset<int> m;
    monotonic_dq dq;
    for (int i = 0; i < a.size(); i++)
    {
        dq.insert(a[i]);
        if (i - k >= 0)
            dq.erase(a[i - k]);
        if (i >= k - 1)
            cout << dq.getmin() << endl;
    }
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