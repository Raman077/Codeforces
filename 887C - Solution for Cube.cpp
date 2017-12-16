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
#define loop(i,j,a) for(int i=j;i<a;i++)
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
	ll ar[25];
	loop(i,1,25){
		cin>>ar[i];
	}
	
	set<ll>v[7];
	v[0].insert(0);
	v[0].insert(1);
	ll x=1;
	loop(i,1,25){
		v[x].insert(ar[i]);
		if(i%4==0)x++;
	}
	vector<ll>arr;
	loop(i,0,7){
		if(v[i].size()==1){
			arr.pb(i);
		}
	}
	if(arr.size()==2){
		if((arr[0]==1&&arr[1]==3)||(arr[0]==2&&arr[1]==6)||(arr[0]==4&&arr[1]==5)){

			if(arr[0]==1&&arr[1]==3){
				if((ar[5]==ar[15])&&(ar[6]==ar[16])&&(ar[17]==ar[7])&&ar[18]==ar[8]&&ar[21]==ar[19]&&ar[22]==ar[20]&&ar[13]==ar[23]&&ar[14]==ar[24]){
					cout<<"YES";
				}
				else if((ar[5]==ar[19])&&(ar[6]==ar[20])&&(ar[17]==ar[23])&&ar[18]==ar[24]&&ar[21]==ar[15]&&ar[22]==ar[16]&&ar[13]==ar[7]&&ar[14]==ar[8]){
					cout<<"YES";
				}
				else{
					cout<<"NO";
					return 0;
				}
			}
			else if(arr[0]==2&&arr[1]==6){
				if((ar[3]==ar[18])&&(ar[4]==ar[20])&&(ar[17]==ar[12])&&ar[19]==ar[11]&&ar[10]==ar[15]&&ar[9]==ar[13]&&ar[16]==ar[1]&&ar[14]==ar[2]){
					cout<<"YES";
				}
				else if((ar[3]==ar[15])&&(ar[4]==ar[13])&&(ar[17]==ar[1])&&ar[19]==ar[2]&&ar[10]==ar[18]&&ar[9]==ar[20]&&ar[16]==ar[12]&&ar[14]==ar[11]){
					cout<<"YES";
				}
				else{
					cout<<"NO";
					return 0;
				}
			}
			else if(arr[0]==4&&arr[1]==5){
				if((ar[1]==ar[6])&&(ar[3]==ar[8])&&(ar[5]==ar[10])&&ar[7]==ar[12]&&ar[9]==ar[21]&&ar[11]==ar[23]&&ar[2]==ar[22]&&ar[4]==ar[24]){
					cout<<"YES";
				}
				else if((ar[2]==ar[5])&&(ar[4]==ar[7])&&(ar[9]==ar[6])&&ar[11]==ar[8]&&ar[1]==ar[23]&&ar[3]==ar[21]&&ar[22]==ar[10]&&ar[24]==ar[12]){
					cout<<"YES";
				}
				else{
					cout<<"NO";
					return 0;
				}
			}
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	else cout<<"NO";
	
}
