//total lower and upper case letters in file :
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int l=0,u=0;
    fp=fopen("hi.txt","w");
    printf("enter content :\n");
    while((ch=getchar())!=EOF)
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp=fopen("hi.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch>=60&&ch<=90)
        {
            u++;
        }
       else if(ch>=97&&ch<=122)
        {
            l++;
        }
        
    }
    printf("\nthe total u letters are : %d",u);
    printf("\nthe total l letters are : %d",l);
    fclose(fp);
    return 0;
}
