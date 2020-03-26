#include <iostream>
#include <string.h>
using namespace std;
int get(char s)  //不加*是一个字符，加*是一个字符串 
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
		int* N = new int[400000];   //C++动态数组
		int* NN = new int[400000];
		int m=0;
		cin>>s;
		int k = 0;
		//把十六进制转化为二进制
		 int str = strlen(s);    //先知道传入的十六进制的长度，从最后一位开始转化 
		 for(j=str-1;j>=0;j--)
		 {
		 	int a = get(s[j]);
			int count = 4;
			while(count--)   //每一位十六进制转化为四位二进制
			{
				int num = a%2;
				N[k++]=num;
				a=a/2;
			 } 
		 }    //循环结束得到一个倒着存的二进制 
		 //把二进制转化为八进制
		  int cnt=1;
		  int x=0;
		  for(i=0;i<k;i++)
		  {
		  	if(cnt==4||i==k-1)    
		  	{
		  		x=cnt*N[i]+x;
		  		cnt=1;
		  		NN[m++]=x;     //每三位二进制存为一位八进制 
		  		x=0;
			}
			else
			{
				x = cnt*N[i]+x;
				cnt*=2;
			}
		  }
		  //将八进制逆序输出
		  int l; 
		 if(NN[m-1]!=0||m==1)printf("%d",NN[m-1]); //避免出现前导0的情况  
         for(l=m-2;l>=0;l--)
         {
             printf("%d",NN[l]);
         }
         printf("\n");
		   
	delete [] s;    //这三行的有无结果不变 
	delete [] N;
	delete [] NN; 
	}
	return 0;
}
