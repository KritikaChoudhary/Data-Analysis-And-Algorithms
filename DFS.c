#include<stdio.h>
int visited[20];
int a[20][20];
int n;
void dfs(int s)
{
    visited[s]=1;
    for(int j=1;j<=n;j++)
        if(!visited[j]&&a[s][j])
        {
            printf("%d->%d\n",s,j);
            dfs(j);
        }
}
void main()
{
    printf("No. of nodes:");
    scanf("%d",&n);
    printf("\nAdjacency matrix:\n");
    for(int i=1;i<=n;i++)
    {
        visited[i]=0;
        for(int j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\n");
    dfs(1);
    for(int i=1;i<=n;i++)
        if(!visited[i])
        dfs(i);
}
