#include <iostream>
using namespace std;
void print(int n)
{
    if(n==0)
    return;
    cout<<n;
    if(n!=1) cout<<" ";
    print(n-1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;cin>>n;print(n);cout<<endl;
    return 0;
}