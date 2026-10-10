#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MAXN=1000000;
int spf[MAXN+1];
void precomp()
{
    // making all numbers as prime
    for(int i=0;i<=MAXN;i++)
    spf[i]=i;
    // modification of seive of erosthenesis
    for(int i =2;i<=MAXN;i++)
    {
        if(spf[i]==i){
            for(int j =2*i;j<=MAXN;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }

}
void solve(){
    // taking n 
    int n ;cin>>n; 
        while(n>1){
            cout<<spf[n]<<" ";
            n = n/spf[n];
        }
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
precomp();
    // Now you can take input safely
 
    solve();
    
    return 0;
}