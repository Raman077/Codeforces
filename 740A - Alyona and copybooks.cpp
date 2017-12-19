#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100007
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a) for(int i=0;i<a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define FI ios_base::sync_with_stdio(false);cin.tie(0);
#define go(n,arr,i) ll n; cin>>n; ll arr[n]; loop(i,n)cin>>arr[i];
#define forit(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
using namespace std;
int main()
{
	FI
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	map<ll,ll>m;
	m[1]=min(b,d+c);
	m[1]=min(m[1],d*3);
	m[2]=min(c,2*d);
	m[2]=min(m[2],2*b);
	m[3]=min(b*3,d);
	m[3]=min(c+b,m[3]);
	ll x=a%4;
	if(x==0){
		cout<<0;
		return 0;
	}
	else{
		x=4-x;
		cout<<m[x];
	}
}
