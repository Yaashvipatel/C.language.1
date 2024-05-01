//extract a substring using calloc.c:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *p,*q;
    int i,j,x,n;
    printf("enter size of string : ");
    scanf("%d",&n);
    p=(char *)calloc(n+1,sizeof(char));
    q=(char *)calloc(n+1,sizeof(char));
    printf("enter string:");
    scanf(" ");
    fgets(p,n+1,stdin);
    printf("index from where you want to extract : ");
    scanf("%d",&x);
    printf("no of characters : ");
    scanf("%d",&n);
    int l=strlen(p);
    for(i=0;i<n;i++)
    {
        *(q+i)=*(p+(x+i));
    }
    *(q+i)='\0';
    puts(q);
    free(p);
    free(q);
    return 0;
}
