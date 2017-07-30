#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int k;
	cin>>k;
	string s;
	cin>>s;
   string p=s;
   sort(p.begin(),p.end());
   if(p[0]=='W')cout<<0<<endl;
   else{
	vector <int>v;
	for (int i=0;i<k;i++)
	{
		if(s[i]=='W'){s.erase(0,1);i--;}
		else break;
	}
	//cout<<s;
	for (int t=0;t<s.size();t++)
	{
		if(s[t]=='W'&&s[t+1]=='W')
		{
		s.erase(t,1);
	t--;
	}
	}
	if(s[s.size()-1]=='B')
	s.push_back('W');
	//cout<<s;
	int count=0,flag=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='B')count++;
		else {
			v.push_back(count);
			count=0;
		}
	}
	cout<<v.size()<<endl;
	for (int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
   }
}
