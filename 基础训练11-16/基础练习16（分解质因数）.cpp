#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int n,m;
vector<int> ans;
int check(int x){//����Ƿ�Ϊ���� 
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
void dfs(int x){
    if(x==1){//������������ֽ����ˣ��Ͱ������������ 
        for(int i=0;i<ans.size();i++){
            if(i==ans.size()-1)
                printf("%d\n",ans[i]);//���һ������*�� 
            else
                printf("%d*",ans[i]);    
        }
    }
    for(int i=2;i<=x;i++){
        if(x%i==0&&check(i)){//�����������������������ѡ�� 
            ans.push_back(i);
            dfs(x/i);//��x/i�������������� 
            break;
        }
    }
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){
        ans.clear();
        if(i==1){
            printf("1=1");
            cout<<endl;
        }
        else
        {
        	printf("%d=",i);
        	dfs(i);	
		}
    } 
    return 0;
}
