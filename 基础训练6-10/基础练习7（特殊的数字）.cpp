#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	int i;      
	for(i=100;i<1000;i++)    //������λ���������������С�����˳����� 
	{                       //����ÿ����λ��  
		a=i%10;       //��ø�λ�� 
		b=i/10%10;    //���ʮλ��
		c=i/100%10;   //��ð�λ�� 
		if((pow(a,3)+pow(b,3)+pow(c,3))==i)                 
			printf("%d\n",i);
	}
return 0;
}

