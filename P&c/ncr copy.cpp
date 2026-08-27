#include <bits/stdc++.h>
using namespace std;
// function for calclating ncr
using lli = long long;
// writing the function to calculate ncr
#define MAX 4004

lli table[MAX][MAX];

void build(lli m)
{
    table[0][0] = 1 % m;

    for (int n = 1; n < MAX; n++)
    {
        // C(n, 0) = 1
        table[n][0] = 1 % m;

        // C(n, n) = 1
        table[n][n] = 1 % m;

        // Pascal's identity
        for (int r = 1; r < n; r++)
        {
            table[n][r] =
                (table[n - 1][r] + table[n - 1][r - 1]) % m;
        }
    }
}
// function for time limit n = 60 
lli permute(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
        int ans =1;
    for(int i =0;i<r;i++)
    {
        ans *=n-i;    
        ans /=i+1;

    }
    return ans;

}

// function for n = 20000
// permutation with any modulo
int ncr_array[4004][4004];
void ncr_anyModulo(int m){
    ncr_array[0][0] =1;
    for(int n =1;n<4004;n++){
       for(int r=0;r<=4004;r++)
       {
         if(r==0||r==n)
        {
            ncr_array[0][0] =1%m;

        }
        else{
            ncr_array[n][r] = (ncr_array[n-1][r] + ncr_array[n-1][r-1])%m;
        }
       }
    }

}
// for greate then 20k
lli mod = 1e9+7;
lli fact[400101];
void precompute()
{
    fact[0]=1;
    for(lli i =1;i<=400100;i++)

    {
        fact[i]=i*fact[i-1]%mod;
    }
}
lli binpower(int a,int b)
{
    if(b==0) return 1;
    if(b&1) return a*binpower(a,b-1)%mod;
    else{
        lli ans = binpower(a,b/2);
        return ans*ans%mod;
    }
}
lli ncr(lli n,lli r)
{
    if(r<0||r>n)
    return 0;
    lli den =(fact[r]*fact[n-r])%mod;
    return fact[n]*binpower(den , mod-2);
}

void solve()
{
    lli n ,r;
    cin>>n>>r;    
    cout<<ncr(n,r);
}
int main()
{
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t = 1;
    // precompute();
    build(100);

    cout<<table[4][2]<<" \n";
    // cin >> t;

    // for (int i = 0; i < t; i++)
    // {
    //     solve();
    // }
    return 0;
}