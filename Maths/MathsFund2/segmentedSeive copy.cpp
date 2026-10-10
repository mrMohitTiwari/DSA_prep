#include <bits/stdc++.h>
using namespace std;

vector<int> simpleSieve(int limit)
{
    vector<bool> prime(limit + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= limit; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= limit; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<int> primes;

    for (int i = 2; i <= limit; i++)
    {
        if (prime[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

void segmentedSieve(int L, int R)
{
    int limit = sqrt(R);

    vector<int> primes = simpleSieve(limit);

    vector<bool> isPrime(R - L + 1, true);

    for (int p : primes)
    {
        long long start = max(1LL * p * p,
                              ((L + p - 1) / p) * 1LL * p);

        for (long long j = start; j <= R; j += p)
        {
            isPrime[j - L] = false;
        }
    }

    if (L == 1)
    {
        isPrime[0] = false;
    }

    for (int i = 0; i <= R - L; i++)
    {
        if (isPrime[i])
        {
            cout << i + L << " ";
        }
    }

    cout << '\n';
}

int main()
{
    int L = 10, R = 30;
    segmentedSieve(L, R);
    return 0;
}
