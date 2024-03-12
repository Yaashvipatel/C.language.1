#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,temp;
    char str[100],mtr[100];
    printf("enter string:");
    fgets(str,100,stdin);
    l=strlen(str);
    while(str[i]!='\0')
    {mtr[i]=str[i];
     i++;
    }mtr[i]='\0';
    for(i=0,j=l-1;i<j;i++,j--)
    {
        temp=mtr[i];
        mtr[i]=mtr[j];
        mtr[j]=temp;
    }
    if(mtr[i]==str[i])
    {
    printf(" pallindrome");
        
    }
    else
    printf("not pallindrome");
    puts(mtr);
    return 0;
}
