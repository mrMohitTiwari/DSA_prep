#include <bits/stdc++.h>
using namespace std;
void print(int i,int j){
    if(i%3==0||j%3==0) cout<<"*";
    else 
    cout<<".";

}
void solve(){
    int n ,m;
    cin>>n>>m;
for(int i =0;i<3*n+1;i++){
    for(int j=0;j<m*3+1;j++){
            print(i,j);
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