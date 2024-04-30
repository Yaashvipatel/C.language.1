//using pointers sort the marks of student and then print details accordingly:
#include<stdio.h>
struct student {
    int roll;
    char name [100];
    int marks ;
    };
    
int main ()
{
   int i,j,n;
   struct student s[100],temp,*p;
   p=s;
   printf ("enter n :");
   scanf("%d",&n);
   printf("enter the following details :\n");
   for(i=0;i<n;i++)
   {
       printf("enter the name , roll no and marks for student %d : ",i+1);
       scanf("%s%d%d",(p+i)->name,&(p+i)->roll,&(p+i)->marks);
   }
   printf("after sorting the details are : \n");
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if((p+i)->marks>(p+j)->marks)
           {
               temp=*(p+i);
               *(p+i)=*(p+j);
               *(p+j)=temp;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       printf("name : %s \t roll no : %d \t marks : %d \n",(p+i)->name,(p+i)->roll,(p+i)->marks);
   }
   return 0;
}
