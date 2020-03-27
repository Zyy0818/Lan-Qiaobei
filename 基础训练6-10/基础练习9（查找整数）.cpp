#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);   //代表第一行的整数n 
	//输入第二行的数列
	int i,m,j;
	int a[n];   //这里不要赋初值，会编译出错 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	scanf("%d",&m);  //代表第三行待查找的数m 
	//开始查找
	for(j=0;j<n;j++)
	{
		if(a[j]==m)
			{
			printf("%d",j+1);
			break;
			}
	} 
	if(j==n)
		printf("-1");
	return 0;
}
