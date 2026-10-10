#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
vector<int> simpleSeive(int limit)
{
    vector<int> isPrime(limit+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=limit;i++)
    {
        if(isPrime[i]){
            for(int j =i*i;j<=limit;j+=i)
            {
                isPrime[j]=false;
            }
        }
    } 
   vector<int> primes;

for(int i = 2; i <= limit; i++)
{
    if(isPrime[i])
        primes.push_back(i);
}
    return primes;
}

// writing the segmented seive
void segmentedSeive(int l,int r)
{
    vector<int> basePrime = simpleSeive(ceil(sqrt(r)));
    // now we need array of size r-l+1
    vector<int> isPrime(r-l+1,true);
    if(l==0){
        isPrime[0]=isPrime[1]=false;
    }
    if(l==1) isPrime[0]=false;
    // p =prime
    for(auto p:basePrime)
    {   
        // calculating the first multiple of p in the range l to r 
       int start = ((l + p - 1) / p) * p;
start = max(p * p, start);
        for(int j = start; j <= r; j += p)
{
    isPrime[j-l] = false;
}


    }
    cout<<"Printing all the primes in the range"<<l<<" "<<r<<endl;
    for (int i = 0; i <= r- l; i++) {
        if (isPrime[i]) {
            cout << i + l<< " ";
        }
    }
    cout<<endl;
}
signed main() {
  int l ,r;
  cout<<"Enter the low and the high limit"<<endl;
  cin>>l>>r;
    segmentedSeive(l,r);

    return 0;
}