//string length using fxn and pointers.c 
#include<stdio.h>
#include<string.h>
void length(char*);
int main()
{
    int i,j;
    char str[100];
    puts("enter string :");
    fgets(str,100,stdin);
    length(str);
    return 0;
}

void length(char*p)
{
    int l=0,i=0;
    while(*(p+i)!=0)
    {
        l++;
        i++;
    }
    printf("length of the given string is :%d",l);
    return ;
}
