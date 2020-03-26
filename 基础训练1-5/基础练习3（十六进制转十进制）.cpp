#include <string>
#include <iostream>
#define N 8
using namespace std;
//16进制转化为10进制 
long long fun(char *s)       
{
	int i,t;
	long long sum=0;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		t=s[i]-'0';
		if(s[i]>='a'&&s[i]<='z')
		t=s[i]-'a'+10;
		if(s[i]>='A'&&s[i]<='Z')
		t=s[i]-'A'+10;
		sum=sum*16+t;
	}
	return sum;
 }

int main()
{
	char ss[N];   
	cin>>ss;
	cout<<fun(ss)<<endl;
	
	return 0;
 } 
