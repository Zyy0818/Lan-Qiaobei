#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int n,m;
vector<int> ans;
int check(int x){//检查是否为素数 
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
void dfs(int x){
    if(x==1){//如果质因数都分解完了，就把质因数都输出 
        for(int i=0;i<ans.size();i++){
            if(i==ans.size()-1)
                printf("%d\n",ans[i]);//最后一个不加*号 
            else
                printf("%d*",ans[i]);    
        }
    }
    for(int i=2;i<=x;i++){
        if(x%i==0&&check(i)){//如果既是质数又是因数，就选它 
            ans.push_back(i);
            dfs(x/i);//将x/i继续搜索质因数 
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
