#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int a[56];
void precompute1()
{

    a[0]=2;
    for(int i=1;i<56;i++)
    a[i]=a[i-1]*2;
}
void precompute2()
{
    for(int i =1;i<56;i++)
        {
            a[i]= a[i-1]+a[i];
        }
       
}
void solve(){
    int n;
    cin>>n;
    cout<<a[n-1]<<endl;


}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t=1; precompute1();
    precompute2();
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}