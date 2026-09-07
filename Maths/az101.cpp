#include <bits/stdc++.h>
using namespace std;
#define int long long
int exp(int a, int x, int mod)
{
// iterative method for the calcualtion of binary exponentiation 
int j = a;
int prod =1;
while(x){
    if(x%2)
    {
        
    }
}


}
int sol(int a, int b, int c, int p)
{
    if (a == 0 || p - 1 == 0)
        return 0;
    if (!b && c)
        return 1;
    if (!a&& !(a % p))
        return 0;
    // using ferment's little thm
    int ans = exp(b, c, p - 1);
    return exp(a, ans, p);
}
void solve()
{
    int a, b, c, p;
    cin >> a >> b >> c >> p;

    cout << sol(a, b, c, p) << endl;
}
signed main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}