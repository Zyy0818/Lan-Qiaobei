#include<stdio.h>
int main()
{
	int i,j,n;
	//��ʼ��
	scanf("%d",&n);
	int a[n][n];      //�ö�ά���� 
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=0;
	                 //�����鸽ֵ(��ʼ��)
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j<1)
				a[i][j]=1;  //��ͷ�ĵ�һ����Ϊ1
			//else if(i==0)break;
			else
			a[i][j]=a[i-1][j-1]+a[i-1][j];
					//������ǵĹ���
		}
	}
	//���
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
