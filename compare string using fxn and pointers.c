//compare string using fxn and pointers.c 
#include<stdio.h>
#include<string.h>
void compare(char*,char*);
int main()
{
    int i,j;
    char a[100],b[100];
    puts("enter string 1:");
    fgets(a,100,stdin);
    puts("enter string 2:");
    fgets(b,100,stdin);
    compare(a,b);
    return 0;
}

void compare(char*p,char*t)
{
    int i,f=0;
    int l1=strlen(p);
    int l2=strlen(t);
    if(l1!=l2)
    {
        printf("unequal");
    }
    else 
    {
        for(i=0;i<l1;i++)
        {
            if(*(p+i)!=*(t+i))
            {
                f=1;
                break;
            }
        }
    if(f==0)
    {
        printf("equal");
    }
    else
    {
        printf("unequal");
    }
    }
    return;
}
