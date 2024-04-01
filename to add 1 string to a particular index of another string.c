#include <stdio.h>
#include<string.h>
int main() 
{
    char str1[100],str2[100];
    int i,j,x;
    printf("enter string 1:\n");
    fgets(str1,100,stdin);
    printf("enter string 2:\n");
    fgets(str2,100,stdin);
    printf("enter the index :\n");
    scanf("%d",&x);
    int n=strlen(str2);
    for(i=x,j=0;j<n;i++,j++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}
