#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
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
map<char,int>m;
map<char,int>me;
int main()
{
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll count=0;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
		me[s[i]]=1;
	}
	
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]--;
		
		if(me[s[i]]==1)
			count++;
		
		if(count>k)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		if(m[s[i]]==0)count--;
		me[s[i]]=0;
	}
	cout<<"NO";
}
