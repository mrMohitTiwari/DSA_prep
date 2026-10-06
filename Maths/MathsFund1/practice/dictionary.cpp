#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<string> dic(651);

void dictionary()
{
    int k =0;
    for(int i =0;i<26;i++){

            char char1 = 'a'+i;
            for(int j =0;j<26;j++)
            {
                char  char2= 'a'+j;
                if(i!=j){
                    dic[k].push_back(char1);
                    dic[k].push_back(char2);k++;
                   
                }
            }

    }
}

void solve(){
//    for(string s:dic) cout<<s<<" ";

string s;
cin>>s;
for(int i =0;i<dic.size();i++)
{
    if(dic[i]==s){cout<<i+1<<endl;return;}

}

}
signed main() {
    // Fast I/O Magic Spell
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
dictionary();
    // Now you can take input safely
    int _t=1;
    cin >> _t;
    for(int i=0;i<_t;i++){
    solve();
    }
    return 0;
}