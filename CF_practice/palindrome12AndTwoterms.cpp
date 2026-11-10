// https://codeforces.com/problemset/problem/2234/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MAX=10000000;
int mul12[MAX+1];
void pre()
{
    int ans=12;
    for(int i=1;i<=MAX;i++){
        mul12[i] = ans*i;
    }
}
bool isPalindrome(int n)
{
        int t = n; int reverse=0;
        while(t){
                int r = t%10;
                reverse = reverse*10+r;
                t = t/10;
        }

        if(n==reverse) return true;
        return false;
      
}

void solve(){
    int n;
    cin>>n;

   if(isPalindrome(n)) {cout<<n<<" "<<0<<endl;return;}
  bool f=false;int i=1;
        while(n>=0){int t=n;
            t-=mul12[i];
            if(isPalindrome(t)&&(t>=0)) {cout<<t<<" "<<mul12[i]<<endl; f=true;return;}n=t;i++;
            
        }
        if(!f){cout<<-1<<endl;}

}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    // Now you can take input safely
    int _t=1;
    cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}