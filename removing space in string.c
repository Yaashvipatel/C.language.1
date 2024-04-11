//removing space in string.c
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,temp,n;
    printf("enter string : ");
    fgets(str,100,stdin);
    n=strlen(str);
    for(i=0;i<n-1;i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
        {
            for(j=i;j<n-1;j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    puts(str);
    
}
