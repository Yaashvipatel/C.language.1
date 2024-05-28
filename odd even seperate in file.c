//odd even seperate in file.c 
#include<stdio.h>
int main ()
{
    FILE *fp,*fe,*fo;
    int n;
    int nos;int i;int num;
    int ce=0;
    int co=0;
    fp=fopen("main.txt","w");
    fe=fopen("even.txt","w");
    fo=fopen("odd.txt","w");
    int arr[100];
    printf("enter the amount of nos : \n");
    scanf("%d",&n);
    printf("enter the nos to main file : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp);
    }
    fclose(fp);
    fp=fopen("main.txt","r");
    for(i=0;i<n;i++)
    {
        int number=getw(fp);
        if(number % 2 ==0)
        {
            putw(number,fe);
            ce++;
        }
        else
        {
            putw(number,fo);
            co++;
        }
    }
    fclose(fp);
    fclose(fe);
    fclose(fo);
    printf("\ncontents of even file is  : \n");
    fe=fopen("even.txt","r");
    {
        for(i=0;i<ce;i++)
    {
        nos = getw(fe);
        printf("%d",nos);
    }
    }
    printf("\ncontents of odd file is  : \n");
    fo=fopen("odd.txt","r");
    {
        for(i=0;i<co;i++)
        {
            nos = getw(fo);
            printf("%d",nos);
        }
    }
    fclose(fe);
    fclose(fo);
    return 0;
     
}
