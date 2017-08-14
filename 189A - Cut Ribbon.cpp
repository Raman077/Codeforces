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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	ll dp[10000000];
	dp[d]=1;
	dp[b]=1;
	dp[c]=1;
	for(int i=1;i<=4000;i++){
	    if(dp[i]>0){
		dp[i+b]=max(dp[i+b],dp[i]+1);
		dp[i+c]=max(dp[i+c],dp[i]+1);
		dp[i+d]=max(dp[i+d],dp[i]+1);
	    }
	}
	cout<<dp[a];
}
