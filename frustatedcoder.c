3. Frustrated coders
There are N frustrated coders standing in a circle with a gun in their hands. Each coder has a skill value S[ i ] and he can only kill those coders that have strictly less skill than him. One more thing, all the guns have only 1 bullet. This roulette can take place in any random order. Fortunately, you have the time stone (haaan wo harre wala) and you can see all possible outcomes of this scenario. Find the outcome where the total sum of the remaining coder's skill is minimum. Print this sum.
Input Format
The first line contains N the no. of coders
The next line contains N elements where the ith element is theS[ i ] of ith coder.
Output Format
Print a single line containing the minimum sum.
Constraints
1<= N <= 1000000
1<=S[i]<=10000
    
    
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
