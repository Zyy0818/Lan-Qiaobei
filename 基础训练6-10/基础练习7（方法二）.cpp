#include <stdio.h>
#include <math.h>
int main()
{
	int i,num;
	int s[10];      
	for(i=100;i<1000;i++)    //������λ���������������С�����˳����� 
	{                       //����ÿ����λ��  
		num = i;
		int m = 0;
		int sum = 0;
		while(num!=0)
		{
			s[m]=num%10;
			num/=10;
			sum+=pow(s[m++],3);
		}
		if(sum==i)                 
			printf("%d\n",i);
	}
return 0;
}

