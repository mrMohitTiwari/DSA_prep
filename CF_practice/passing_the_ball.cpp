// https://codeforces.com/problemset/problem/2204/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cntR=0;
    for(int i=0;i<n;i++)
    {   ++cntR;
        if(s[i]!='R') break;
        
    }
    cout<<cntR<<endl;;
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