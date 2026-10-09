#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;

    set<int> canCross;

    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        canCross.insert(x);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        canCross.insert(x);
    }

    if (canCross.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}