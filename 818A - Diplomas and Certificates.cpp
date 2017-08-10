#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100000
#define fs first
#define sec second
#define vi vector<int>
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a,c) for(int i=0;i<a;i++)
#define loop1(i,a,c) for(int i=1;i<=a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
int main()
{
	unsigned ll x,y;
	cin>>x>>y;
	unsigned ll a=0,b=0,m=x/2,n;
	unsigned ll r=x-a-b;
	a=(x/2)/(y+1);
	b=y*a;
	r=x-a-b;
	cout<<a<<" "<<b<<" "<<r;
}
