#include <bits/stdc++.h>
using namespace std;
int cycleNumbers[8] = {4, 16, 37, 58, 89, 145, 42, 20};
int nextNumber(int x) {
    int sum = 0;

    while (x > 0) {
        int digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }

    return sum;
}

int signature(int x) {
    int steps = 0;

    while (true) {
        if (x == 1) {
            return 8;
        }

        for (int k = 0; k < 8; k++) {
            if (x == cycleNumbers[k]) {
                return ((k - steps) % 8 + 8) % 8;
            }
        }

        x = nextNumber(x);
        steps++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long cnt[9] = {};

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            cnt[signature(x)]++;
        }

        long long ans = 0;

        for (int i = 0; i <= 8; i++) {
            ans += cnt[i] * (cnt[i] - 1) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}
