    #include <bits/stdc++.h>
    using namespace std;

    #define endl '\n'

    void solve() {
        int a[3];

        for(int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a, a + 3);

        a[2]--;

        if(a[0] < a[1])
            a[0]++;
        else
            a[1]++;

        if(a[0] == a[1] && a[1] == a[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--)
            solve();

        return 0;
    }