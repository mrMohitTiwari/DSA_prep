#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MAXN =1000000;
bool isPrime[MAXN+1];
// using seive of erosthenesses
void preCompute()
{
    for(int i =2;i<=MAXN;i++)
    {
        isPrime[0] = false;isPrime[1]=false;
        isPrime[i]=true;

    }
    for(int i=2;i<=MAXN;i++)
    {
        if(isPrime[i]){
            for(int j =2*i;j<=MAXN;j+=i){
                isPrime[j]=false;
            }
        }
    }
}

void solve(){
    int n;cin>>n;int a;for(int i =0;i<n;i++)
    {
        cin>>a;
        int x = sqrtl(a);
            
        if(a==x*x && isPrime[x]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    preCompute();
solve();
    return 0;
}
























// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define int long long
// void solve(){
//     int n ;
//     int x;
//     cin>>n;
//     for(int i =0;i<n;i++){
//         cin>>x; int cnt=0;
//         for(int i =1;i*i<=x;i++){
//             if(x%i==0 && x/i==i) cnt++;
//             else if(x%i==0) cnt+=2;
//                 if(cnt>3) {cout<<"NO"<<endl;
//                 break;}
//         }
//         if(cnt==3) cout<<"YES"<<endl;else if(cnt<3) cout<<"NO"<<endl;
//     }
    
// }
// signed main() {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);


  
//     solve();

//     return 0;
// }