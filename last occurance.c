#include<stdio.h>
int main()
{
    int N,M,a[1000],i,count;
    scanf("%d\t%d",&N,&M);

    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
       
        if(a[i]==M)
        count=i;
     
    }
    if(count>0)
    {
        printf("%d",count+1);
    }
    else
    {
        printf("-1");
    }
  
    
}
Language: C