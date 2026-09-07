#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
// exponent function 
int mod =1e9+7;
int exp(int a ,int x)
{
    int j =a%mod;
    int prod=1;
    while(x){
        if(x&1) prod = (prod*a)%mod;
        j=(j%mod*j%mod)%mod;
        x=x/2;

    }
    return prod;
}
int inv(int x)
{
    return (exp(x,mod-2))%mod;
}
int add(int a ,int b){
    return (a%mod+b%mod)%mod;

}
int mul(int a ,int b){
    return (a%mod*b%mod)%mod;

}
int sub(int a ,int b){
    return (a%mod-b%mod+mod)%mod;

}
int division(int a ,int b) {;
    return (a%mod*inv(b))%mod;
}
int res(char op,int a ,int b){
    if(op=='+') return add(a,b);
        if(op=='-') return sub(a,b);
        if(op=='*') return mul(a,b);
       if(op=='/') return division(a,b);
}
void solve(){
char p1 ,op1,op2,p2;
int a ,b,c,p; string m;
cin>>p1>>a>>op1>>b>>op2>>c>>p2>>m>>p;
int ans;
if ((op1 == '+') || (op1 == '-')) {
      if ((op2 == '+') || (op2 == '-')) {
        ans = res(op1, a, b);
        ans = res(op2, ans, c);
      } else {
        ans = res(op2, b, c);
        ans = res(op1, a, ans);
      }
    } else {
      ans = res(op1, a, b);
      ans = res(op2, ans, c);
    }
    cout << ans << "\n";
  
}
signed main() {
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