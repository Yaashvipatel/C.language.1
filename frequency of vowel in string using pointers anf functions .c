//frequency of vowel in string using pointers anf functions 

#include<stdio.h>
#include<string.h>

void check(char*p)
{
    int v=0,i;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>=65&&*(p+i)<=90||*(p+i)>=97&&*(p+i)<=122)
        {
            if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
            {
                v++;
            }
        }
    }
    printf("vowels are :%d",v);
}

int main()
{
    int i,j;
    char str[100];
    printf("enter string :");
    fgets(str,100,stdin);
    check(str);
    return 0;
}
