
#include <bits/stdc++.h>
using namespace std;

#define int long long

int gcd(int a, int b) {
    while (b) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;

    int g = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        g = gcd(g, x);
    }

    vector<int> pr = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53
    };

    for (int p : pr) {
        if (g % p != 0) {
            cout << p << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
