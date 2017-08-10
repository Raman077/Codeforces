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
	string s[t];
	int x,y,a,b,flag=0;
	for(int i=0;i<t;i++)
	{
		cin>>s[i];
		if(s[i][0]=='O'&&s[i][1]=='O'&&flag==0)
		{
			s[i][0]='+';s[i][1]='+';
			flag=1;
		}
		else if(s[i][3]=='O'&&s[i][4]=='O'&&flag==0)
		{
			s[i][3]='+';s[i][4]='+';
			flag=1;
		}
	}
	if(flag==0)cout<<"NO"<<endl;
	else 
	{
		cout<<"YES"<<endl;
		for(int i=0;i<t;i++)
		{
			cout<<s[i]<<endl;
		}
	}
	
}
