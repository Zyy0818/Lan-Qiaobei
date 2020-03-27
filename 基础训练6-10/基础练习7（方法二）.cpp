#include <stdio.h>
#include <math.h>
int main()
{
	int i,num;
	int s[10];      
	for(i=100;i<1000;i++)    //满足三位数的条件，满足从小到大的顺序输出 
	{                       //遍历每个三位数  
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

