#include<stdio.h>
void main()
{
    printf("No of nodes:");
    int n,ne=1;
    scanf("%d",&n);
    int visited[n],c,b,a[n][n],min;
    printf("\nAdjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
        visited[i]=0;
    printf("\nSource node:");
    int source,mincost=0;
    scanf("%d",&source);
    visited[source]=1;
    printf("\nMST\n");
    while(ne<n)
    {
        min=999;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]<min)
                {
                    if(!visited[i])
                        continue;
                    if(i==j)
                        continue;
                    else
                    {
                        min=a[i][j];
                        b=i;
                        c=j;
                    }
                }
            }
        }
        if(!visited[b]||!visited[c])
        {
            printf("\nedge %d\t(%d,%d)=%d",ne,b,c,min);
            mincost+=min;
            visited[c]=1;
            ne++;
        }
        a[b][c]=a[c][b]=999;
    }
    printf("\nMin cost=%d",mincost);
}
