#include<stdio.h>

void main()
{
    int n,i,ans;
    scanf("%d",&n);
    int high=n*n*n*n*n;
    unsigned char term[high];

    int stack[n];

    fflush(stdin);
    scanf("%[^\n]",&term);
    int k=0;
    while(term[i]!='\0')
    {
        if(term[i]=='-')
        {

        }
        else if(term[i]=='+')
        {

        }
        else if(term[i]=='*')
        {

        }
        else
        {
            k++;
        }
        i++;

    }


    printf("%s",term);
}
