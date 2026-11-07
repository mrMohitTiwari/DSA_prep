#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007LL;

long long sumOfSubarrayProducts(const vector<long long>& arr) {
    long long endingProducts = 0;
    long long answer = 0;

    for (long long value : arr) {
        long long x = (value % MOD + MOD) % MOD;

        endingProducts = (x + endingProducts * x) % MOD;
        answer = (answer + endingProducts) % MOD;
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> arr(n);
    for (long long& value : arr) {
        cin >> value;
    }

    cout << sumOfSubarrayProducts(arr) << '\n';
    return 0;
}
