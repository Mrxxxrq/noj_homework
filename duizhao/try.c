#include<stdio.h>
#include<stdbool.h>
enum{N=11};
int ans[N];
bool mark[N];
int n;



void dfs(int u)
{   


    if (u == n)
    {
       for (int i = 0; i < n; i++)
       {
        printf("%d",ans[i]);
        
       }
       printf("\n");
       return;
    }
    

    for (int i = 1; i <=n; i++)
    {
        if (mark[i]==false)
        {
            mark[i]=true;
            ans[u]=i;
            dfs(u+1);

            mark[i]=false;
        }
        
    }
    
}


int main()
{
  
    scanf("%d", &n); // 输入 n
    dfs(0);          // 从第 0 个位置开始填
    return 0;
}