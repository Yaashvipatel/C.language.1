//concatenate two strings:
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,la,lb;
    char stra[100],strb[100];
    puts("enter string a :");
    fgets(stra,100,stdin);
    puts("enter string b :");
    fgets(strb,100,stdin);
    la=strlen(stra);
    lb=strlen(strb);
    for(i=0;i<la+lb;i++,j++)
    {
        stra[j+la-1]=strb[j];
    }
    stra[la+j]='\0';
    puts(stra);
    return 0;
    
}
