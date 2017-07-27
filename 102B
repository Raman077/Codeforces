#include <iostream>
#include<cstdio>
using namespace std;

int main()
 {
 	
	int num;
    string s;
int sum=0,count =1;
cin>>s;
if(s.size()==1)
{
	cout<<0<<endl;
	return 0;
}
for (int i=0;i<s.length();i++)
{
	
int ia = s[i]-48;
	//cout<<ia;
sum=sum+ia;	
}
num=sum;
//cout<<num;
if(sum<10)num=0;
sum=0;
while(num!=0)
{
	sum=sum+num%10;
	num/=10;
	//cout<<sum<<endl;
	if(num==0&&sum/10!=0)
	{
		//cout<<sum<<endl;
		count++;
		num=sum;
		sum=0;
	}
	else if(num==0&&sum/10==0)
	{
		count++;
		break;
	}
}
cout<<count<<endl;
}
