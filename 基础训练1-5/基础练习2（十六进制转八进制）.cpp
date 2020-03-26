#include<stdio.h>
#include<string.h>
 
int getN(char s)
{
    if(s>='0'&&s<='9')
    {
        return s-48;
    }else{
        return s-55;  //A:65
    }
}
 
int NO[400002];
int N[400002];
char s[100002];
int main()
{
    int i,n,j,l;
    scanf("%d",&n);
    while(n--)
    {
         scanf("%s",s);
         int slen=strlen(s);
         int k=0,m=0;
         for(j=slen-1;j>=0;j--)    //转化后的二进制是倒着存的 
         {
             int num=getN(s[j]);   //每一位进行转化 
             int count=4;          //每一位十六进制可以转化为四位二进制 
             while(count--)
             {
                 NO[k++]=num%2;    //此循环是将一位十六进制转化为四位二进制 
                 num=num/2;
             }
         }
        int cnt=1,x=0;
        for(i=0;i<k;i++){          //将三位二进制转化为一位八进制 
            if(cnt==4||i==k-1){
                x=cnt*NO[i]+x;
                cnt=1;
                N[m++]=x;
                x=0;
            } else{
                x=cnt*NO[i]+x;
                cnt*=2;
               }
        }
         if(N[m-1]!=0||m==1)printf("%d",N[m-1]);   //把之前转化出的八进制再倒着打印出来 
         for(l=m-2;l>=0;l--)
         {
             printf("%d",N[l]);
         }
         printf("\n");
    }
    return 0;
} 
