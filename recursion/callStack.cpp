#include<iostream>
using namespace std;
#define endl "\n"
void show(int n)
{
    if(n==0) {cout<<n<<endl;return;}
    cout<<"Entering "<<n<<endl;
    show(n-1);

    cout<<"Entering "<<n<<endl;
}
int main()
{
    show(5);
    return 0;
}