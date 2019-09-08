#include<stdio.h>
int main()
{
    int N,K,T,a[100],i,j,min,count=0;
    scanf("%d",&T);
    while(count<T)
    {
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    if(min>=K)
    {
        printf("%d\n",0);
        count++;
    }
    else
    {
        printf("%d\n",K-min);
        count++;
    }
    }
    return 0;
}