#include<stdio.h>
int main()
{
	int i,j,n;
	//初始化
	scanf("%d",&n);
	int a[n][n];      //用二维数组 
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=0;
	                 //给数组附值(初始化)
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j<1)
				a[i][j]=1;  //开头的第一个数为1
			//else if(i==0)break;
			else
			a[i][j]=a[i-1][j-1]+a[i-1][j];
					//杨辉三角的规律
		}
	}
	//输出
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
