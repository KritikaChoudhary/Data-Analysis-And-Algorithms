#include<stdio.h>
int N,board[100][100];
int isattacked(int i,int j)
{
    for(int k=0;k<N;k++)
    {
        if(board[i][k]==1||board[k][j]==1)
            return 1;
    }
    for(int k=0;k<N;k++)
    {
        for(int l=0;l<N;l++)
        {
            if((k+l)==(i+j)||(k-l)==(i-j))
            {
                if(board[k][l]==1)
                    return 1;
            }
        }
    }
    return 0;
}
int Queen(int n)
{
    if(n==0)
        return 1;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(!isattacked(i,j)&&board[i][j]!=1)
            {
                board[i][j]=1;
                if(Queen(n-1)==1)
                    return 1;
                board[i][j]=0;
            }
        }
    }
    return 0;
}
void main()
{
    printf("No. of queens:");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            board[i][j]=0;
    Queen(N);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            printf("%d\t",board[i][j]);
        printf("\n");
    }
}
