#include <string>
#include <iostream>
#define N 50
using namespace std;
//����16����ת10�����ٽ�10����ת8���ƽ��
int fact(int n)    //��10����תΪ8����
{
	if(n<8)         
	return n;
	else
	    return fact(n/8)*10+n%8;
 }

long fun(char *s)        //���´��뽫16����תΪ10���� 
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
