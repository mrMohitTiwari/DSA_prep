#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string s ,t;int n;cin>>n;cin>>s>>t;
    map<int,int> mp;
    for(char &c:s) mp[c-'0']++;
    for(char &c:t) mp[c-'0']--;
    for(auto m:mp) {if(m.second<0){ cout<<"NO"<<endl;return;}}
    cout<<"YES"<<endl;

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