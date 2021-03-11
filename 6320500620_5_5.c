
#include<stdio.h>

void main()
{
    int N,B;
    scanf("%d",&N);
    int A[N][N];
    scanf("%d",&B);

    int i,k;
    for(i=0 ; i<N ; i++)
    {
        for(k=0 ; k<N ; k++)
        {
            scanf("%d",&A[i][k]);
        }
    }
    i=0,k=0;

    int now=0,max=0,temp=0;
    while(i<N && k<N)
    {
        for(i=0+temp ; i+temp<B+temp ; i++)
        {
            for(k=0+temp ; k+temp<B+temp ; k++)
            {
                now=now+A[i][k];
            }

        }

        if(temp==0 || max<now)
            max=now;
        now=0;
        temp++;
    }

    printf("max= %d\n",max);






}
