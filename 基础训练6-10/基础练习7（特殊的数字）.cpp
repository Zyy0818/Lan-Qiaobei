#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	int i;      
	for(i=100;i<1000;i++)    //满足三位数的条件，满足从小到大的顺序输出 
	{                       //遍历每个三位数  
		a=i%10;       //求得个位数 
		b=i/10%10;    //求得十位数
		c=i/100%10;   //求得百位数 
		if((pow(a,3)+pow(b,3)+pow(c,3))==i)                 
			printf("%d\n",i);
	}
return 0;
}

