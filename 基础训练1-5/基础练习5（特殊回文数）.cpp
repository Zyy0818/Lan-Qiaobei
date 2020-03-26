#include <stdio.h>
int main()
{
	int i,n,num;
	int sum,reversal;      //sum每位数字之和，reversal指它的回文数 
	while(scanf("%d",&n)!=EOF)    //EOF:end of file  
	//scanf函数只有在第一个参数为NULL(空指针)的情况下，才可能返回EOF
	//在while循环中以EOF作为文件结束标志 
	{
		if(1<=n&&n<=54)
		{
			for(i=10000;i<1000000;i++)    //五位数+六位数 
			{
				num=i;                                    //遍历每个五位与六位十进制数 
				sum=0,reversal=0;                         //每位数字之和与其回文数均赋初值0 
				while(num>0)
				{
					reversal=reversal*10+num%10;	      //求解回文数 
					sum+=(num%10);                        //数位分离，从低位开始累加 
					num/=10;
				}
				if(sum==n && reversal==i)                 //一个数的各位数字之和等于n且是回文数，则输出 
					printf("%d\n",i);
			}
		}
		else
			return 0;
	}
	return 0;
}

