#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
long long der[1000001];

void compute_derangements(int N) {
    der[1] = 0, der[2] = 1;
    for (int i = 3; i <= N; i++) {
        der[i] = ((i - 1) * (der[i - 1] + der[i - 2])) % MOD;
    }
}

int main() {
    int N;
    cin >> N;
    compute_derangements(N);
    cout << der[N] << endl;
    return 0;
}
