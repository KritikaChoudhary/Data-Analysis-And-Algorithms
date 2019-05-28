#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 10
int *sel(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    return a;
}
void main()
{
    int a[20];
    //printf("Enter the size and the array:");
    //scanf("%d\n",&size);
    for(int i=0;i<size;i++)
        //scanf("%d",&a[i]);
        a[i]=rand();
    clock_t start=clock();
    int *b=sel(a,size);
    clock_t fin=clock();
    printf("\n");
    //for(int i=0;i<size;i++)
        //printf("%d\t",b[i]);
    printf("\nStart=%d\tFinal=%d\tTime=%lf",start,fin,(double)(fin-start)/CLOCKS_PER_SEC);
}
