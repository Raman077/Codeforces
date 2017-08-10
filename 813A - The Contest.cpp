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
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t];
	ll sum=0;
	for(int i=1;i<=t;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	int m;
	cin>>m;
	//int a[100000];
	//memset(a,0,sizeof a);
	int b=0,flag=0;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x>>b;
		if(sum>=x&&sum<=b)
		{
			flag=1;
			sum=sum;
		}
		else if(sum<=x&&flag==0)
		{
			flag=2;
			sum=x;
		}
	}
	if(b>=sum)cout<<sum<<endl;
	else cout<<-1<<endl;
}
