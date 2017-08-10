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
	string s;
	string a;
	cin>>s>>a;
	
	map<char,char>m;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]=a[i];
	//	cout<<m[s[i]];
		m[s[i]-32]=a[i]-32;
	}
	string p;
	cin>>p;
	for(int i=0;i<p.length();i++)
	{
		if(p[i]>=65&&p[i]<=90||p[i]>=97&&p[i]<=122)
		cout<<m[p[i]];
		else cout<<p[i];
		
		
	
	}
}
