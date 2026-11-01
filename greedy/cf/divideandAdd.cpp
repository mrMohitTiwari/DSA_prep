
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int ans = INT_MAX;

    for (int i = 0; i <= 30; i++) {
        int divisor = b + i;

        if (divisor == 1) continue;

        int x = a;
        int cnt = i;

        while (x > 0) {
            x /= divisor;
            cnt++;
        }

        ans = min(ans, cnt);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
