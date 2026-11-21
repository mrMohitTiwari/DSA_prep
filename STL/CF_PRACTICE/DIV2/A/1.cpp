#include <iostream>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;int k;
    cin>>n>>k;
    int ans=0;
    int a = 2*n;
    ans += (a + k -1)/k;
    a = 5*n;
    ans += (a + k -1)/k;

a = 8*n;
    ans += (a + k -1)/k;
    cout<<ans<<endl;

    

    return 0;
}