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
int main()
{
	int x;
	cin>>x;
	if(x==2)
	{
		cout<<"NO";
	}
	else
	{
		if(x%2==0)cout<<"YES";
		else cout<<"NO";
	}
}
