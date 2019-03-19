#include<stdio.h>
int v,a[50][50],s,q[50],f=0,r=-1,visit[50];
void bfs(int s)
{
    for(int i=1;i<=v;i++)
    {
       if(visit[i]==0&&a[s][i]==1)
        q[++r]=i;
    }
    if(f<=r)
    {
        visit[q[f]]=1;
        bfs(q[f++]);
    }
}
void main()
{
    printf("Enter the no. of vertices:");
    scanf("%d",&v);
    for(int i=1;i<=v;i++)
    {
        q[i]=0;
        visit[i]=0;
    }
    printf("\nEnter the adjacency matrix:");
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter the source node:");
    scanf("%d",&s);
    bfs(s);
    for(int i=1;i<=v;i++)
    {
        if(visit[i]==1)
            printf("\n%d is reachable",i);
        else
            printf("\n%d is not reachable",i);
    }
}
