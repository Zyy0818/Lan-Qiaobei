#include <iostream>
#include <string.h>
using namespace std;
//十进制转十六进制 
int main()
{
	long long n;
	scanf("%I64d",&n);
	char* ss = new char[30000];
	int i;
	int m;
	char t;
	
	if(n!=0)
	{
		
		while(n!=0)
		{
			m = n%16;
		   	n = n/16;
		   	if(m>=0&&m<=9)
				t=m+'0';
			if(m>=10&&m<=15)
				t=m-10+'A';    //不能直接t=m+'55'; 
			
		   	ss[i++]=t;
		}
		
		if(i==1||ss[i-1]!=0)
			printf("%c",ss[i-1]);
		int l;
		for(l=i-2;l>=0;l--)
	         {
	             printf("%c",ss[l]);
	         }
	         printf("\n");
	}
	else
	printf("0");
}
