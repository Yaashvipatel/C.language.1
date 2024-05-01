//sort string in non increasing order using dynamic memory allocation in c;
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,j,n;
    char *str,temp;
    printf("enter the size of string :");
    scanf("%d",&n);
    str=(char *)malloc((n+1)*sizeof(char));
    printf("enter string : \n");
    scanf(" ");
    fgets(str,n+1,stdin);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("after sorting : \n");
    puts(str);
    return 0;
}

