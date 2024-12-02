#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int round[10];
        int count=0;
        int divisor=1;
        while(n>0)
        {
            int digit = n%10;
            if(digit>0)
            {
                round[count++]=digit *divisor;
            }
            n/=10;
            divisor*=10;
        }
        printf("%d\n",count);
        for(int i =0 ;i<count ;i++)
        {
            printf("%d ",round[i]);
        }
        printf("\n");

    }
    return 0;
}
