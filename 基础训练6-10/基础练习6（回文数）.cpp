#include <stdio.h>
int main()
{
	int i,n,num;
	int sum,reversal;      //sum每位数字之和，reversal指它的回文数 
	for(i=1000;i<10000;i++)    //满足四位数的条件，满足从小到大的顺序输出 
	{
		num=i;                                    //遍历每个四位数 
		sum=0,reversal=0;                         //每位数字之和与其回文数均赋初值0 
		while(num>0)
		{
			reversal=reversal*10+num%10;	      //求解回文数 
			sum+=(num%10);                        //数位分离，从低位开始累加 
			num/=10;
		}
		if(reversal==i)                 
			printf("%d\n",i);
	}
return 0;
}

