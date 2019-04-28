#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else return b;
}
void knapsack(int n,int v[],int w[],int W)
{
    int k[n][W];
    for(int i=0;i<=n;i++)
    {
        printf("\n");
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            k[i][j]=0;
            else if(w[i-1]>j)
            k[i][j]=k[i-1][j];
            else
                k[i][j]=max(k[i-1][j],v[i-1]+k[i-1][j-w[i-1]]);
            printf("%d\t",k[i][j]);
        }
    }
    printf("\nMax value=%d\nItems included in the sack:",k[n][W]);
    for(int i=n,j=W;i>0;i--)
    {
        if(k[i][j]==k[i-1][j])
                continue;
            else
            {
                printf("%d\t",i);
                j-=w[i-1];//important
            }
        }
    }


void main()
{
    printf("No of items:");
    int n;
    scanf("%d",&n);
    printf("\nValues and weights of the items:");
    int v[n],w[n];
    for(int i=0;i<n;i++)
        scanf("%d%d",&v[i],&w[i]);
    int W;
    printf("\nWeight of the sack:");
    scanf("%d",&W);
    knapsack(n,v,w,W);
}
