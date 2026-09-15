#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool checkBal(string s)
{
    int depth =0;
    for(auto x:s){
        if(depth<0) return false;
        if(x=='(') depth++;
        if(x==')') depth--;
    }
    if(depth==0) return true;
    return false;
}
void solve(){
    string s;
    cin>>s;
    if(checkBal(s)) cout<<"string is balance\n";
    else cout<<"not balance\n";

}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t=1;
    // cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}