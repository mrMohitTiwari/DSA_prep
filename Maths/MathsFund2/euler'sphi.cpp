#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MAXN =1000000;
bool isPrime[MAXN+1];
// using seive of erosthenesses
void preCompute()
{
    for(int i =2;i<=MAXN;i++)
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
    int n ;
    cin>>n;
int cnt=0;
int ans =n;
    for(int i =2;i*i<=n;i++){
        if(n%i==0 && isPrime[i]) {


            ans = (ans*(i-1))/i;
            if(n/i!=i && isPrime[n/i])  ans = (ans*((n/i)-1))/(n/i);


        }
        
      
    }
 cout<<ans<<endl;
     
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