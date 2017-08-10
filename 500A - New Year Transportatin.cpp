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
	int a,b;
	cin>>a>>b;
	int arr[a-1];
	for(int i=1;i<a;i++)
	{
		cin>>arr[i];
	}
	int c=1;
	for(int i=1;i<a;i++)
	{
		if(i!=c)continue;
		if(c==b)
		{
			cout<<"YES"<<endl;
			return 0;
			break;
		}
		else
		{
			c=arr[i]+c;
		}		
	}
	if(c==b)cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
}
