// naive approach will be o(1)
// it is said strictly <n
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int sumOfmulitplies(int k ,int n)
{
    int m = (n-1)/k; //number of terms stictly less then n
    //1k ,2k,3k .....mk
    int ans = k*(((m)*(m+1))/2);
    return ans;
}
void solve(){
    int n ;cin>>n;
        int ans  = sumOfmulitplies(3,n)+sumOfmulitplies(5,n)-sumOfmulitplies(15,n);
        cout<<ans<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t=1;
    cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}