//copy string to other using fxn and pointers.c 
#include<stdio.h>
#include<string.h>
void copy(char*);
int main()
{
    int i,j;
    char a[100];
    puts("enter string:");
    fgets(a,100,stdin);
    copy(a);
    return 0;
}

void copy(char*p)
{
    int i;
    char *t,b[100];
    t=b;
    int l=strlen(p);
    for(i=0;*(p+i)!='\0';i++)
    {
        *(t+i)=*(p+i);
    }
    puts(t);
    return;
}
