#include<stdio.h>
int parent[10];
int find(int i)
{
    while(parent[i])
    i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
void main()
{
    int n,a,b,u,v,cost=0,min;
    printf("No of nodes:");
    scanf("%d",&n);
    int adj[n][n];
    printf("\nAdjacency matrix:\n");
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&adj[i][j]);
    printf("\nMST\n");
    int ne=1;
    while(ne<n)
    {
        min=999;//important
        for(int i=1;i<=n;i++)
        {

            for(int j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                if(adj[i][j]<min)
                {
                    min=adj[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            printf("\nEdge %d (%d,%d)=%d",ne++,a,b,min);
            cost+=min;
        }
        adj[a][b]=adj[b][a]=999;
    }
    printf("\nMin cost:%d",cost);
}


