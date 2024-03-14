//upper to lower case using fxn and pointer 
#include<stdio.h>
#include<string.h>

void change(char *p)
{
    int i=0,j;
    while(*(p+i)!='\0')
    {
        if(*(p+i)>=65&&*(p+i)<=90)
        {
            *(p+i)=*(p+i)+32;
        }
        i++;
    }
    puts(p);
}

int main()
{
    int i,j;
    char str[100];
    printf("enter string :");
    fgets(str,100,stdin);
    change(str);
    return 0;
}
