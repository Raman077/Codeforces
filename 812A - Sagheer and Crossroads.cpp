#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<utility>
#define MX 100000
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	int arr[4][4],flag=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		cin>>arr[i][j];
	}
	for(int i=0;i<4;i++)
	{
		if(arr[i][3])
		{
			if(i==0)
			{
				if(arr[3][2]||arr[2][1]||arr[1][0]){
					cout<<"YES"; flag=1; break; 
				}
			}
			else if(i==1)
			{
				if(arr[0][2]||arr[2][0]||arr[3][1]){
					cout<<"YES"; flag=1; break; 
				}
			}
			else if(i==2)
			{
				if(arr[3][0]||arr[0][1]||arr[1][2]){
					cout<<"YES"; flag=1; break; 
				}
			}
			else if(i==3)
			{
				if(arr[2][2]||arr[0][0]||arr[1][1]){
					cout<<"YES"; flag=1; break;
				}
			}
			if(arr[i][3]&&(arr[i][2]||arr[i][1]||arr[i][0])){
				cout<<"YES"; flag=1; break; 
			}
		}
	}
	if(flag==0)cout<<"NO";
}
