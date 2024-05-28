//string is pallindrome or not in file.c 
#include<stdio.h>
#include<string.h>
int main ()
{
    FILE *fp;
    int f=0;
    int i,j;
    char str[100];
    fp=fopen("hi1.txt","w");
    printf("enter content : \n");
    fgets(str,100,stdin);
    int l=strlen(str);
    fputs(str,fp);
    fclose(fp);
    fp=fopen("hi1.txt","r");
    while((fgets(str,sizeof(str),fp))!=NULL)
    {
        for(i=0,j=l-2;i<j;i++,j--)
        {
            if(str[i]!=str[j])
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    printf("palindrome");
    else
    printf("not palindrome");
    fclose(fp);
    return 0;
}

