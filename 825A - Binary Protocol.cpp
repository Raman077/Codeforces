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
	ll t;
	cin>>t;
	string s;cin>>s;
	ll o=0;int flag=1;
	for(int i=0;i<t;i++)
	{
		if(s[i]=='1')
			{
				o++;
				flag=1;
			}
		else
		{
			if(flag==1)
			{
				cout<<o;
				flag=0;
				o=0;
			}
			else
			{
				cout<<'0';
				o=0;
			}
		}
	}
	cout<<o;
}
