#include<stdio.h>

void main()
{
    int hrow,col,hcol,n,i,j,k,spos;
    scanf("%d",&n);


    if(n%2==0)
    {
        hrow=n/2;
        col=n-1;
    }
    else
    {
        hrow=(n/2)+1;
        col=n;
    }
    hcol=col/2;

    for(i=0; i<hrow ;i++)
    {
        for(k=0;k<col;k++)
        {
            if( (k == hcol+i) || (k == hcol-i) )
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }

    if(n%2==0)
    {
        i=i;
    }
    else
    {
        i=i-1;
    }


    for(i=i-1 ; i>=0 ;i=i-1)
    {
        for(k=0;k<col;k++)
        {
            if( (k == hcol+i) || (k == hcol-i) )
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }

}
