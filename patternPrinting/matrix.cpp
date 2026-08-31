#include <bits/stdc++.h>
using namespace std;

void solve(){
int P_diag =0;
int op_daig =0;
int n ;
cin>>n;
int a[n][n];
for(int i =0;i<n;i++){
    for(int j =0;j<n;j++) {cin>>a[i][j];

    if(i+j==n-1) op_daig+=a[i][j];
    if(i==j) P_diag+=a[i][j];
   
    }

}
cout<<abs(op_daig-P_diag)<<"\n";


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