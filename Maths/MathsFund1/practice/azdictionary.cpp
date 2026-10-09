#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// https://codeforces.com/problemset/problem/1674/B
void solve(){
    string s;
    cin>>s;
    int ans = s[0]-'a';

    ans = ans*25;
    if(s[1]>s[0]) {
        --ans;
        ans = ans+(s[1]-'a')+1;
    }else{
        ans = ans+(s[1]-'a')+1;
    }
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