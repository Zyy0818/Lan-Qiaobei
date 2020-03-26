#include <stdio.h>
#include <stdlib.h>
using namespace std;
//快速排序法 
void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
		//Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
		//注1：有的书上是以中间的数作为基准数的，要实现这个方便非常方便，直接将中间的数和第一个数进行交换就可以了。 
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
				j--;  
            if(i < j) 
				s[i++] = s[j];
			
            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
				i++;  
            if(i < j) 
				s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // 递归调用 
        quick_sort(s, i + 1, r);
    }
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int *ss=new int[n];
	for(i=0;i<n;i++)
		scanf("%d",&ss[i]);
	quick_sort(ss,0,n-1); 
	for(i=0;i<n;i++)
		printf("%d ",ss[i]);
	
	return 0;
 } 
