#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
int sum(int n )
{ int sum=0;
    while(n){
      sum+=n%10;n/=10;
    }return sum; 
}
void solve(){
    int x; cin>>x;int cnt=0;
    for(int i =1;i<=90;i++) {
        int y = x+i;

            if((y-sum(y))==x) cnt++;
    }
    cout<<cnt<<endl;
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