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
    int n ,x;
    cin>>n>>x;
    vector<int> a(n); for(int i =0;i<n;i++)
    cin>>a[i];
    set<int> pr_factor;

        while(x>1){
           pr_factor.insert(spf[x ]);
            x= x/spf[x];
        }
        int cs,ms;cs=ms=0;
        for(int x:pr_factor){
            cs=0;
                for(int i =0;i<n;i++){
                    if(a[i]%x==0) cs+=a[i];
                }
                ms = max(ms,cs);

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
precomp();
    cin >> _t;
    for (int i = 0; i < _t; i++)
    {
        solve();
    }
    return 0;
}