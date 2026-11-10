#include<stdio.h>
#define MAX 101
int m,n,d;
int used[MAX][MAX] = {0};

int min_step = -1;
void dfs(int x,int y,int steps)
{
    if (x == d||y==d)
    {
        if (steps<min_step||min_step==-1)
        {
            min_step = steps;
            return;
        }
        
    }
    if (used[x][y]==1)
    {
        return;
    }
//-----------------------------------------------------
    used[x][y] = 1;


    dfs(0,y,steps+1);
    dfs(x,0,steps+1);

    dfs(m,y,steps+1);
    dfs(x,n,steps+1);


    
    int sum = x + y;
    if (sum > n)
    {
        dfs(sum-n,n,steps+1);
    }
    else dfs(0,sum,steps+1);
    


    if (sum > m)
    {
        dfs(m,sum-m,steps+1);
    }
    else dfs(sum,0,steps+1);
    


    used[x][y]=0;



    
}

int main()
{
    scanf("%d%d%d",&m,&n,&d);
    dfs(0,0,0);
    printf("%d\n",min_step);
    return 0;
}