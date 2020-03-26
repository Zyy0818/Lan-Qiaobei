#include <stdio.h>
#include <stdlib.h>
using namespace std;
//�������� 
void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
		//Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ�������� �μ�ע1
		//ע1���е����������м������Ϊ��׼���ģ�Ҫʵ���������ǳ����㣬ֱ�ӽ��м�����͵�һ�������н����Ϳ����ˡ� 
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // ���������ҵ�һ��С��x����
				j--;  
            if(i < j) 
				s[i++] = s[j];
			
            while(i < j && s[i] < x) // ���������ҵ�һ�����ڵ���x����
				i++;  
            if(i < j) 
				s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // �ݹ���� 
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
