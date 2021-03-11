#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int n,i,ans=0;
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
    int save[9];

    char *token = strtok(term, " ");

    while( token != '\0' )
    {
        printf("%s\n",token);
        if(token[0]=='-')
        {
            save[k-1]=save[k-1]-save[k];
            save[k]=0;
            k=k-1;
            printf("k=%d , -save[k]=%d\n",k,save[k]);
        }
        else if(token[0]=='*')
        {
            save[k-1]=save[k-1]*save[k];
            save[k]=0;
            k=k-1;
            printf("k=%d , *save[k]=%d\n",k,save[k]);
        }
        else if(token[0]=='+')
        {
            save[k-1]=save[k-1]+save[k];
            save[k]=0;
            k=k-1;
            printf("k=%d , +save[k]=%d\n",k,save[k]);
        }
        else
        {
            printf("atoi = %d ",atoi(token));
            save[k]=atoi(token);
            printf("k=%d , save[k]=%d\n",k,save[k]);
            k++;
        }
        printf("now k=%d , save[k]=%d\n",k-1,save[k-1]);


        token = strtok(NULL, " ");
    }




    printf("%d",ans);
}
