//enter the id , name and income of emplyees in a company and grant the loan on the following basis :
//if income >=5 lakhs , print loan can be granted , else cannot be granted:
//using pointers sort the marks of student and then print details accordingly:
#include<stdio.h>
struct employee {
    int id;
    char name [100];
    int income ;
    };
    
int main ()
{
   int i,j,n;
   struct employee s[100];
   printf ("enter n :");
   scanf("%d",&n);
   printf("enter the following details :\n");
   for(i=0;i<n;i++)
   {
       printf("enter the name , id and income for employee %d : ",i+1);
       scanf("%s%d%d",s[i].name,&s[i].id,&s[i].income);
   }
   for(i=0;i<n;i++)
   {
       if(s[i].income>500000)
       {
           printf("loan can be granted to employee %d \n",i+1);
       }
       else
       {
           printf("loan cannot be granted to employee %d\n",i+1);
       }
   }
   return 0;
}
