#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 10
void sort(int a[],int low,int mid,int high)
{
    int b[20],i=low,j=mid+1,k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
      b[k++]=a[i++];
    while(j<=high)
       b[k++]=a[j++];
    for(int i=0;i<=high;i++)
        a[i]=b[i];

}
void merge(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        merge(a,low,mid);
        merge(a,mid+1,high);
        sort(a,low,mid,high);
    }
}
void main()
{
    int a[20];
    //printf("Enter size and array:");
    //scanf("%d",&size);
    for(int i=0;i<size;i++)
       // scanf("%d",&a[i]);
       a[i]=rand();
    clock_t start=clock();
    merge(a,0,size-1);
    clock_t fin=clock();
    printf("\n");
    //for(int i=0;i<size;i++)
        //printf("%d\t",a[i]);
    printf("\nStart=%d\tFinal=%d\tTime=%lf",start,fin,(double)(fin-start)/CLOCKS_PER_SEC);
}
