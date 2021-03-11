#include<stdio.h>
#include <string.h>

void main()
{
    int n,i,ans;
    scanf("%d",&n);
    int high=n*n*n*n*n;
    unsigned char term[high];

    int stack[n];
    for(i=0;i<n;i++)
        stack[n]=0;

    fflush(stdin);
    scanf("%[^\n]",&term);
    int k=0;
    i=0;
    while(term[i]!='\0')
    {
        char *token = strtok(term, " ");

        while( token != '\0' )
        {
            printf(" %s\n",token);
            token = strtok(NULL, " ");
        }

    }


    printf("%s",term);
}
