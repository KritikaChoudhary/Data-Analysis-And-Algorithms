#include<stdio.h>
void warshal(int n,int a[][n])
{
    for(int k=1;k<=n;k++)
    {
        printf("\nR[%d]:\n",k-1);
        for(int i=1;i<=n;i++)
        {
            printf("\n");
            for(int j=1;j<=n;j++)
            {
                a[i][j]=(a[i][k]&&a[k][j])||a[i][j];
                printf("%d\t",a[i][j]);
            }
        }
    }
}
void main()
{
    printf("Enter the no. of nodes:");
    int n;
    scanf("%d",&n);
    int a[n][n];
    printf("\nEnter the adjacency matrix:\n");
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    warshal(n,a);
}
