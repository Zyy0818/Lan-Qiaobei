#include <stdio.h>
int main()
{
	int i,n,num;
	int sum,reversal;      //sumÿλ����֮�ͣ�reversalָ���Ļ����� 
	for(i=1000;i<10000;i++)    //������λ���������������С�����˳����� 
	{
		num=i;                                    //����ÿ����λ�� 
		sum=0,reversal=0;                         //ÿλ����֮�����������������ֵ0 
		while(num>0)
		{
			reversal=reversal*10+num%10;	      //�������� 
			sum+=(num%10);                        //��λ���룬�ӵ�λ��ʼ�ۼ� 
			num/=10;
		}
		if(reversal==i)                 
			printf("%d\n",i);
	}
return 0;
}

