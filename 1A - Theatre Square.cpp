#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<utility>
#define MX 100000
#define fs first
#define sec second
#define TC int T;cin>>T;while(T--)
#define loop(i,a,c) for(int i=0;i<a;i++)
#define loop1(i,a,c) for(int i=1;i<=a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
using namespace std;
int sig(ll a)
{
	if(a>0)
	{
		return 1;
	}
	else return 0;
}
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	cout<<((a/c)+sig(a%c))*((b/c)+sig(b%c));
}
