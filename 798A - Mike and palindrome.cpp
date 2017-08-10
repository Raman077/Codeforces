#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string p = s;
	int count  = 0;
	reverse(p.begin(),p.end());
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=p[i])
		count++;
	}
	if(count==2)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
