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
using namespace std;
int main()
{
	int x,n;
	cin>>x>>n;
	string s1,s2;
	cin>>s1>>s2;
	int t=s1.length();
	vector<int>v,v1;
	//v.clear();
	int m=INT_MAX;
	for(int i=0;i<s2.length()-x+1;i++)
	{
		int p=i;int count=0;
		for(int j=0;j<t;j++)
		{
			if(s2[p]!=s1[j])
			{
				count++;
				v.push_back(j+1);
			}
			p++;
		}
	//	cout<<count<<endl;
		if(m>count)
		{
			v1.clear();
			v1=v;
			v.clear();
			m=count;
		}
		else
		{
			v.clear();
		}
	}
	cout<<v1.size()<<endl;
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}
