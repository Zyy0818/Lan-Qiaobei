#include <iostream>
#include <string.h>
using namespace std;
int get(char s)  //����*��һ���ַ�����*��һ���ַ��� 
{
	if(s>='0'&&s<='9')
		return (s-'0');
	if(s>='A'&&s<='Z')
		return (s-55);
	if(s>='a'&&s<='z')
		return (s-87);
}
 
int main()
{
	int n;
	int i,j;
	cin>>n;
	while(n--)
	{
		char* s = new char[100000];
		int* N = new int[400000];   //C++��̬����
		int* NN = new int[400000];
		int m=0;
		cin>>s;
		int k = 0;
		//��ʮ������ת��Ϊ������
		 int str = strlen(s);    //��֪�������ʮ�����Ƶĳ��ȣ������һλ��ʼת�� 
		 for(j=str-1;j>=0;j--)
		 {
		 	int a = get(s[j]);
			int count = 4;
			while(count--)   //ÿһλʮ������ת��Ϊ��λ������
			{
				int num = a%2;
				N[k++]=num;
				a=a/2;
			 } 
		 }    //ѭ�������õ�һ�����Ŵ�Ķ����� 
		 //�Ѷ�����ת��Ϊ�˽���
		  int cnt=1;
		  int x=0;
		  for(i=0;i<k;i++)
		  {
		  	if(cnt==4||i==k-1)    
		  	{
		  		x=cnt*N[i]+x;
		  		cnt=1;
		  		NN[m++]=x;     //ÿ��λ�����ƴ�Ϊһλ�˽��� 
		  		x=0;
			}
			else
			{
				x = cnt*N[i]+x;
				cnt*=2;
			}
		  }
		  //���˽����������
		  int l; 
		 if(NN[m-1]!=0||m==1)printf("%d",NN[m-1]); //�������ǰ��0�����  
         for(l=m-2;l>=0;l--)
         {
             printf("%d",NN[l]);
         }
         printf("\n");
		   
	delete [] s;    //�����е����޽������ 
	delete [] N;
	delete [] NN; 
	}
	return 0;
}
