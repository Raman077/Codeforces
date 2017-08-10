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
	int t;
	cin>>t;
	ll arr[t];int flag=0;
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+t);
	for(int i=0;i<t-2;i++)
	{
		if(arr[i]+arr[i+1]>arr[i+2])
		{
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
		
	}
	if(flag==0)cout<<"NO"<<endl;
}
