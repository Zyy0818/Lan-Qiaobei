#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);//代表第一行的整数n
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);  //代表第二行的整数数列 
	}
	//输出第一行最大值
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%d\n",max);
	//输出第二行最小值
	int min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("%d\n",min);
	//输出第三行数列的和 
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%d\n",sum);
	return 0;
}
