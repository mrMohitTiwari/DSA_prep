#include <iostream>
using namespace std;
// precomuting the factorial of each number with the prime modulo


using lli = long long;
#define MAX 1000000
const long long mod = 1000000007LL;
lli fact[MAX];
void precompute()
{
    fact[0]=1;
    for(int i =1;i<MAX;i++)
    {
        fact[i] = (i*fact[i-1])%mod;
    }

}
// function for calcualting integral power
lli binpow(lli a,lli b)
{
    if(b==0)
    return 1;
    if(b%2) return (a*binpow(a,b-1))%mod;
    else {
        lli  ans = binpow(a,b/2);
        return (ans*ans)%mod;

    }
}
// function for calcuating inverse of mod
lli inv(lli b)
{
    return binpow(b,mod-2);
}
lli ncr(int n ,int r)
{
    lli ans = fact[n];
    

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();
    

    return 0;
}