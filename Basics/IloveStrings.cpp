#include <bits/stdc++.h>
using namespace std;

void solve(){
            string s,t;
            cin>>s>>t;
            string a;
                int i =0;

                while(i<=s.size()&&i<=t.size()){
                        a.push_back(s[i]);
                        a.push_back(t[i]);
                        i++;
                }
            while(i<s.size()){
                a.push_back(s[i]);
                i++;
            }
            while(i<t.size()){
                a.push_back(t[i]);
                i++;
            }
                cout<<a<<"\n";
}
int main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
    solve();
    }
    return 0;
}