#include<stdio.h>
struct student{
    int roll;
    char name[100];
    char depart[100];
    char course[100];
    int yoj;
};
void roll(struct student s[],int n,int i)
{
    int x;
    printf("enter the roll no : ");
    scanf("%d",&x);
    printf("\t************OUTPUT************\n");
    for(i=0;i<n;i++)
    {
        if(s[i].roll==x)
        {
            printf("%d\t%s\t%s\t%s\t%d\n",s[i].roll,s[i].name,s[i].depart,s[i].course,s[i].yoj);
        }
    }
}
void year(struct student s[],int n,int i)
{
    int x;
    printf("enter the year : ");
    scanf("%d",&x);
    printf("\t************OUTPUT************\n");
    for(i=0;i<n;i++)
    {
        if(s[i].yoj==x)
        {
            printf("%s\n",s[i].name);
        }
    }
}
int main()
{
    int i,n;
    struct student s[450];
    printf("\t************INPUT************\n");
    printf("enter number of records : ");
    scanf("%d",&n);
    printf("enter details of student : \n");
    for(i=0;i<n;i++)
    {
        printf("enter the roll no , name , department , course and year of joining of student %d :",i+1);
        scanf("%d%s%s%s%d",&s[i].roll,s[i].name,s[i].depart,s[i].course,&s[i].yoj);
    }
    year(s,n,i);
    printf("\n\t************INPUT************\n");
    roll(s,n,i);
    return 0;
}
