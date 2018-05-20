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
ll arr[1001], ar[1001];
int main()
{
	FI
	ll n,m;
	cin>>n>>m;
	string s[n];
	loop(i,n){
		cin>>s[i];
	}

	ll c=0;
	loop(i,n){
		loop(j,m){
			if(s[i][j]=='*'){
				arr[i]++;
				ar[j]++; c++;
		}
	}
}

		loop(i,n){
			loop(j,m){
				if(arr[i]+ar[j]+(s[i][j]=='*'?-1:0)==c){
					cout<<"YES"<<endl;
					cout<<i+1<<" "<<j+1<<endl;
					return 0;
				}
			}
		}
		cout<<"NO";
	
}
