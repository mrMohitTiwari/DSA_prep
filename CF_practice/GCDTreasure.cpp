// https://codeforces.com/problemset/problem/2267/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> primeCal(int n)
{
    vector<bool> primes(n+1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i*i <= n; i++)
    {
        if (primes[i])
        {
            for (int j = 2* i;  j <= n; j+=i)
            {
                primes[j] = false;
            }
        }
    }
    vector<int> ans;
    for(int i =0;i<=n;i++){
        if(primes[i]) ans.push_back(i);
    }

   
    return ans;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    vector<int> prime = primeCal(x);
         int cs,ms;
        cs = ms=0;
       for(int x:prime){
        for(int i=0;i<n;i++){
            if(p[i]%x==0) cs+=p[i];
        }
        ms = max(cs,ms);
        cs =0;
       }
       cout<<ms<<endl;
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