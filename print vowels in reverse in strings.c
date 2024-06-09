//print vowels in reverse in strings.c 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];char temp;
    int i,j,n;
    printf("enter string. : \n");
    fgets(str,100,stdin);
    n=strlen(str);
    for(i=0,j=n-2;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("vowels in rev order : \n");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            printf("%c\t",str[i]);
        }
        else
        {
            
        }
    }
    return 0;
}
