
#include <stdio.h>

int main()
{
    int n,i,j,temp,sum=0,c[100];
    printf("Enter the number of coders\n");
    scanf("%d",&n);
    printf("Enter the skills rate of coders\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(c[i]>c[i+1])
            {
             temp=c[i];
             c[i]=c[i+1];
             c[i+1]=temp;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(c[i]>c[j]&&c[j]!=0)
            {
                c[j]=0;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+c[i];
    }
    printf("%d",sum);
    return 0;
}
