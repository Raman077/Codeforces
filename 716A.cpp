#include<iostream>
#include<vector>
#include<algorithm
//xyz
using namespace std;
int main()
{
	int t;
	cin>>t;
	int cc; cin>>cc;
	vector <int> v;
	for(int i=0;i<t;i++)
	{
		int in;
		cin>>in;
		v.push_back(in);
		if(i!=0)
		{
			if(v[v.size()-1]-v[v.size()-2]>cc){
			v.clear();
			v.push_back(in);}
		}
	}
	cout<<v.size()<<endl;
}
