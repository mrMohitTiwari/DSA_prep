#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int next_num(int n)
{   int s=0;
    while(n){
            int x = n%10;
            s +=x*x;
            n/=10;
    }
    return s;
}
int signature(int x)
{
    int signatures[]={4,16,37,58,89,145,42,20}; int nights=0;
    while(true){
        if(x==1) return 8; //has entered the 1 cycle so now it is forever 1
            for(int i=0;i<8;i++)
            {
                if(x==signatures[i]){
                    return ((i-nights)+8)%8;
                }

            }
                ++nights;
                x = next_num(x);

    }
}
void solve(){
    int n ;
    cin>>n;
    int signature_count[9]={}; int x;
        for(int i =0;i<n;i++)
        {   cin>>x;
                signature_count[signature(x)]++;
        }
        int ans=0;
        for(int i=0;i<9;i++)
        {   
            ans+=(signature_count[i]*(signature_count[i]-1))/2;
        }
            cout<<ans<<endl;

}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Now you can take input safely
    int _t=1;
    cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}