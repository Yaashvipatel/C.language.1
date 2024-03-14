//pallindrome checking in string.c 

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,f=0;
    char str[100];
    puts("enter string:");
    fgets(str,100,stdin);
    int l=strlen(str);
    for(i=0,j=l-2;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        puts("not pallindrome");
    }
    else
    {
        puts("pallindrome");
    }
    return 0;
}
