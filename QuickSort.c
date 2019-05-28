#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define n 100
int a[n];
/*void swap(int *a,int *b)
{
    int *temp=*a;
    *a=*b;
    *b=*temp;
}*/
int part(int a[],int low,int high)
{
    int i=low+1,j=high;
    while(1)
    {
        //printf("\ni=%d\tj=%d",i,j);
        while(a[i]<=a[low]&&i<=high) i++;
        while(a[j]>a[low]) j--;
        if(i<=j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
           // swap(&a[i],&a[j]);
        else
        {
            int temp=a[low];
            a[low]=a[j];
            a[j]=temp;
            return j;
        }
           // swap(&a[low],&a[j]);
    }
}
void quick(int a[],int low,int high)
{
    if(low<=high)
    {
        int pos=part(a,low,high);
        quick(a,low,pos-1);
        quick(a,pos+1,high);
    }
}
void main()
{
    for(int i=0;i<n;i++)
    {
        a[i]=i;
        ///printf("%d\t",a[i]);
    }
    printf("\n");
    clock_t start=clock();
    quick(a,0,n-1);
    clock_t fin=clock();
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("\nSize=%ld",n);
    double total=(double)(fin-start)/CLOCKS_PER_SEC;
    printf("\nStart=%f\tFinal=%f\tTime=%lf",start,fin,total);
}
