#include <stdio.h>
#include <math.h>
int main()
{
	int n, m;	//n行  m列 
	int i,j; 
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++)   //行
	{
		for(j=0; j<m; j++)  //列
		{
			printf("%c",65+abs(j-i));
		}
		printf("\n");
	}
	return 0;
}
