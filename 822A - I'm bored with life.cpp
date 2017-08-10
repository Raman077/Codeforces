#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    int x=1;
    for(int i=1;i<=min(a,b);i++)
    {
        x*=i;
    }
    cout<<x<<endl;
}
