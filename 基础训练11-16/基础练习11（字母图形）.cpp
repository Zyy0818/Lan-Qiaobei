#include <stdio.h>
#include <math.h>
int main()
{
	int n, m;	//n��  m�� 
	int i,j; 
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++)   //��
	{
		for(j=0; j<m; j++)  //��
		{
			printf("%c",65+abs(j-i));
		}
		printf("\n");
	}
	return 0;
}
