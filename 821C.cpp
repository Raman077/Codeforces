#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
#include<stack>
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
	ll x;
	cin>>x;
	stack<int>s;
	int p=1;
	int count=0;
	
	int flag=0;
	for(int i=1;i<=2*x;i++){
		string a;
		cin>>a;
		if(a=="add"){
			int v;
			cin>>v;
			s.push(v);
		}
		else{
			if(!s.empty()){
			
			int x=s.top();
			if(x!=p){
				count++;
				while(!s.empty())s.pop();
			}
			else if(x==p) {
			if(!s.empty())s.pop();
			}
			
		}
		p++;
	}
	
	}
	cout<<count<<endl;
}
