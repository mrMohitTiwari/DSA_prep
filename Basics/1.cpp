#include <iostream>
using namespace std;
bool bet(int n ){
    while(n){
        int r = n%10;
        // cout<<n<<" ";
       if(!(r==4 || r==7)) return false;
        n /=10;
    }
    return true;
}
void solve(){
int a ,b;
cin>>a>>b;
for(int i =a;i<=b;i++){

    if(bet(i)) cout<<i<<" ";
}
cout<<"\n";
}
int main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t=1;
    // cin >> t;
    for(int i=0;i<t;i++){
    solve();
    }
    return 0;
}