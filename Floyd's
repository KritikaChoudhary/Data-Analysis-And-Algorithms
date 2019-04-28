#include<stdio.h>
void floyd(int n,int c[][n])
{
    for(int k=1;k<=n;k++)
    {
        printf("\nD[%d]:\n",k-1);
        for(int i=1;i<=n;i++)
        {
            printf("\n");
            for(int j=1;j<=n;j++)
            {
                if(c[i][k]+c[k][j]<c[i][j])
                    c[i][j]=c[i][k]+c[k][j];
                printf("%d\t",c[i][j]);
            }
        }
    }
}
void main()
{
    printf("Enter the no. of nodes:");
    int n;
    scanf("%d",&n);
    int c[n][n];
    printf("\nEnter the cost matrix:\n");
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&c[i][j]);
    floyd(n,c);
}

