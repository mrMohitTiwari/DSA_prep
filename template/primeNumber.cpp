#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MAXN =1000000;
bool isPrime[MAXN+1];
// using seive of erosthenesses
void preCompute()
{
    for(int i =0;i<=MAXN;i++)
    {
        isPrime[0] = false;isPrime[1]=false;
        isPrime[i]=true;

    }
    for(int i=2;i<=MAXN;i++)
    {
        if(isPrime[i]){
            for(int j =2*i;j<=MAXN;j+=i){
                isPrime[j]=false;
            }
        }
    }
}

void solve(){
    for(int i =1;i<20;i++)
    {
        if(isPrime[i]) cout<<i<<endl;
    }
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    preCompute();

 
 solve();
   
    return 0;
}