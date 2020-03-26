#include <string>
#include <iostream>
#define N 50
using namespace std;
//利用16进制转10进制再将10进制转8进制解决
int fact(int n)    //将10进制转为8进制
{
	if(n<8)         
	return n;
	else
	    return fact(n/8)*10+n%8;
 }

long fun(char *s)        //以下代码将16进制转为10进制 
{
	int i,t;
	long sum=0;
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
	return fact(sum);
 }

int main()
{
	int n,i;
	scanf("%d",&n);
	char ss[N]={0};            
	for(i=0;i<n;i++)
		scanf("%s",&ss[i]);
	 
	for(i=0;i<n;i++)
		printf("%d\n",fun(&ss[i]));
	
	return 0;
 } 
