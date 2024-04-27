//rent of cars for days in struct car
#include<stdio.h>
struct car {
    char id[100];
    char name [100];
    int rent ;
    };
    
int main ()
{
   int i,j,n,x;
   struct car s[100];
   printf ("enter n :");
   scanf("%d",&n);
   printf("enter the following details :\n");
   for(i=0;i<n;i++)
   {
       printf("enter the model name , id and rent for car %d : ",i+1);
       scanf("%s%s%d",s[i].name,s[i].id,&s[i].rent);
   }
   printf("enter the no of days : ");
   scanf("%d",&x);
   printf("the total rent for specified number of days will be : \n");
   for(i=0;i<n;i++)
   {
       s[i].rent=s[i].rent*x;
       printf("model name : %s\t id : %s\t rent : %d\n",s[i].name,s[i].id,s[i].rent);
   }
   return 0;
}
