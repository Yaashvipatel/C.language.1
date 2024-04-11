//removing space in string.c
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],mtr[100],ltr[100];
    int i,j,c,temp,n,p,m;
    printf("enter string : ");
    fgets(str,100,stdin);
    n=strlen(str);
    j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    puts(str);
    return 0;
}
