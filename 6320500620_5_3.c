
#include<stdio.h>

unsigned long long checkugly(unsigned long long num)
{
    while(num>1)
    {
        if(num%2==0)
        {
            num=num/2;
        }
        else if(num%3==0)
        {
            num=num/3;
        }
        else if(num%5==0)
        {
            num=num/5;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    unsigned long long n,i=2,j,k,count=2;
    scanf("%llu",&n);

    while(count<n)
    {
        printf("count=%llu\n",count);
        printf("i=%llu\n",i);
        count=count+checkugly(i);
        i++;

    }
    printf("%llu",i);


}
