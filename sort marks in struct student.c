//sort marks in struct student.c
#include<stdio.h>
struct student {
    int roll;
    char name [100];
    int marks ;
    };
    
int main ()
{
   int i,j,n;
   struct student s[100],temp;
   printf ("enter n :");
   scanf("%d",&n);
   printf("enter the following details :\n");
   for(i=0;i<n;i++)
   {
       printf("enter the name , roll no and marks for student %d : ",i+1);
       scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
   }
   printf("after sorting the details are : \n");
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(s[i].marks>s[j].marks)
           {
               temp=s[i];
               s[i]=s[j];
               s[j]=temp;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       printf("name : %s \t roll no : %d \t marks : %d \n",s[i].name,s[i].roll,s[i].marks);
   }
   return 0;
}
