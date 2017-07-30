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
#define x first
#define y second
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	ll arr[t][t];
	ll a=(t-1)/2,b=1,c=2,count=0;
	for(int i=0;i<(t)/2;i++)
	{
		for(int j=0;j<t;j++)
		{
		
		 if(j>=a-count&&j<=a+count){
		 	arr[i][j]=b;
		 	b+=2;
		 	
		 //	cout<<"x";
		 }
		 else {
		 	arr[i][j]=c;
		 	c+=2;
		 	//cout<<"y";
		 }
		 
	}
	count++;
	}	
	count=0;
		for(int i=t-1;i>=(t)/2;i--)
	{
			for(int j=0;j<t;j++)		
		{
	 	if(j>=a-count&&j<=a+count){
		 	arr[i][j]=b;
		 	b+=2;
		 	
		 }
		 else {
		 	arr[i][j]=c;
		 	c+=2;
		 }
	}
	count++;
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
}
