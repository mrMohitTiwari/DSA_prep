#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){ bool f=true;
        int a[4];for(int i=0;i<4;i++) cin>>a[i];
        for(int i=1;i<4;i++) {
            if(a[i]!=a[i-1]) f=false;
        }
         if(f) cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }
   
}