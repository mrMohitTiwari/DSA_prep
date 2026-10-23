// it is O(n^2) //letter we will do it using segmenet tree
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    vector<int> a={1,4,5,6,21,2};
    int n =a.size();  int ans=0;
    for(int i =0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(a[i]>a[j]) {
                ans+=(i+1)*(n-j);
            }
        }
    }
    cout<<ans<<endl;
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
solve();
    return 0;
}