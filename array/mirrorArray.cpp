#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ,m;
    cin>>n>>m; int a[n][m];
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int t = n;
     for(int i =0;i<n;i++)
    {

        for(int j =0;j<m;j++)
        {   if(t>=0)
            swap(a[i][j],a[i][t]);
            t-=2;
        }


    }
       for(int i =0;i<n;i++)
    {

        for(int j =0;j<m;j++)
        {   cout<<a[i][j]<<" ";
        }
        cout<<"\n";

    }


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