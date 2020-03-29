#include <stdio.h>
#include <stdlib.h>
int main()
{
	int y;
	scanf("%d",&y);  //代表输入的年份
	if(y<1990||y>2050)
		return 0;
	if((y%4==0&&y%100!=0)||(y%400==0))
		printf("yes");
	else
		printf("no"); 
	return 0;
}
