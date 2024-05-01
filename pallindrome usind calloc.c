//pallindrome usind calloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str;
    int i,j,n,temp;
    int f=0;
    printf("enter n :");
    scanf("%d",&n);
    str=(char *)calloc(n+1,sizeof(char *));
    printf("enter string :");
    scanf(" ");
    fgets(str,100,stdin);
    int l=strlen(str);
    for(i=0,j=l-2;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        f=1;
    }
    if(f==0)
    {
        printf("palindrome\n");
    }
    if(f==1)
    printf("not palindrome\n");
    free(str);
    printf("%ld",sizeof(str));
    return 0;
}
