//shift spaces in starting of string.c 
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
        if(str[i]==' ')
        {
            c++;
        }
    }
    str[j]='\0';
    puts(str);
    
    for(i=0;i<=c;i++)
    {
        mtr[i]=' ';
    }
    mtr[i]='\0';
    m=strlen(mtr);
    for(i=0,j=m-1;i<n+m;i++,j++)
    {
        mtr[j]=str[i];
    }
    mtr[j]='\0';
    puts(mtr);
    return 0;
}
