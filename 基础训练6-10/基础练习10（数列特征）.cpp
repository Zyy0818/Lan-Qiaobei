#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);//�����һ�е�����n
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);  //����ڶ��е��������� 
	}
	//�����һ�����ֵ
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%d\n",max);
	//����ڶ�����Сֵ
	int min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("%d\n",min);
	//������������еĺ� 
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%d\n",sum);
	return 0;
}
