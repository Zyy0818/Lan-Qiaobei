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
         for(j=slen-1;j>=0;j--)    //ת����Ķ������ǵ��Ŵ�� 
         {
             int num=getN(s[j]);   //ÿһλ����ת�� 
             int count=4;          //ÿһλʮ�����ƿ���ת��Ϊ��λ������ 
             while(count--)
             {
                 NO[k++]=num%2;    //��ѭ���ǽ�һλʮ������ת��Ϊ��λ������ 
                 num=num/2;
             }
         }
        int cnt=1,x=0;
        for(i=0;i<k;i++){          //����λ������ת��Ϊһλ�˽��� 
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
         if(N[m-1]!=0||m==1)printf("%d",N[m-1]);   //��֮ǰת�����İ˽����ٵ��Ŵ�ӡ���� 
         for(l=m-2;l>=0;l--)
         {
             printf("%d",N[l]);
         }
         printf("\n");
    }
    return 0;
} 
