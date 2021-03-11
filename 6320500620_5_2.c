#include<stdio.h>

void main()
{
    int hrow,col,hcol,n,i,j,k,spos;
    scanf("%d",&n);

    if(2%1!=0)
    {
        hrow=(n/2)+1;
        col=n;
    }
    else
    {
        hrow=n/2;
        col=n-1;
        hcol=(col/2)+1;
    }

    for(i=0; i<hrow ;i++)
    {
        for(k=0;k<col;k++)
        {
            if(k!=hcol)
            {
                printf("_");
            }
            else
            {
               printf("*");
            }
            printf("\n")
        }
    }

}
