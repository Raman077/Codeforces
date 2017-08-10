#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	ll arr[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	int a=0,b=t-1;
	while(a<=b)
	{
		if(a%2==0)
		swap(arr[a],arr[b]);
		a++;
		b--;
	}
		for(int i=0;i<t;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
