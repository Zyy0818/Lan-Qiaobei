#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);   //�����һ�е�����n 
	//����ڶ��е�����
	int i,m,j;
	int a[n];   //���ﲻҪ����ֵ���������� 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	scanf("%d",&m);  //��������д����ҵ���m 
	//��ʼ����
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
