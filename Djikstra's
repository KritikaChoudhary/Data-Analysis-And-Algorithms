#include<stdio.h>
void djikstra(int n,int a[][n],int s)
{
    int visited[n],dist[n],pred[n],min,count,next;
    for(int i=0;i<n;i++)
    {
        dist[i]=a[s][i];
        visited[i]=0;
        pred[i]=s;
    }
    visited[s]=1;
    dist[s]=0;
    count=1;
    while(count<n-1)
    {
        min=999;
        for(int i=0;i<n;i++)
        {
            if(dist[i]<min&&!visited[i])
            {
                min=dist[i];
                next=i;
            }
        }
        visited[next]=1;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                if(a[next][i]+min<dist[i])
                {
                    dist[i]=a[next][i]+min;
                    pred[i]=next;
                }
            }
        }
         count++;
    }
    for(int i=0;i<n;i++)
    {
        if(i!=s)
        {
            printf("\nDistance of %d=%d",i,dist[i]);
            printf("\nPath: %d",i);
            int j=i;
            do
            {
                j=pred[j];
                printf("->%d",j);
            }while(j!=s);
        }
    }
}
void main()
{
    int n,source;
    printf("No of nodes:");
    scanf("%d",&n);
    int a[n][n];
    printf("\nAdjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("\nSource node:");
    scanf("%d",&source);
    djikstra(n,a,source);
}
