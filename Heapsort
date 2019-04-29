#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void buildheap(int h[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        int k=i,v=h[k],heap=0,j;
        while(heap==0&&(2*k)<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(h[j]<h[j+1])
                    j++;
            }
            if(v>=h[j])
            heap=1;
            else
            {
                h[k]=h[j];
                k=j;
            }
        }
        h[k]=v;
    }
}
void heapsort(int h[],int n)
{
    for(int i=n;i>=1;i--)
    {
        buildheap(h,i);
        int t=h[1];
        h[1]=h[i];
        h[i]=t;
    }
}
void main()
{
    printf("No of elements:");
    int n;
    scanf("%d",&n);
    int h[n];
    //printf("Elements:");
        for(int i=1;i<=n;i++)
            //scanf("%d",&h[i]);
            h[i]=rand();
    clock_t start=clock();
    heapsort(h,n);
    clock_t finals=clock();
    //printf("\nSorted array:");
    //for(int i=1;i<=n;i++)
        //printf("%d\t",h[i]);
    printf("\nStart=%d",start);
    printf("\nFinal=%d",finals);
    printf("\nTotal=%f",(double)(finals-start)/CLOCKS_PER_SEC);
}
