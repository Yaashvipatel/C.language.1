//print the highest and lowest price in struct book.c
#include<stdio.h>
struct book {
    char author[100];
    char title[100];
    int price;
    };
    
int main ()
{
   int i,j,n,max,min,maxi,mini;
   struct book s[100];
   printf ("enter n :");
   scanf("%d",&n);
   printf("enter the following details :\n");
   for(i=0;i<n;i++)
   {
       printf("enter the title , author name and price for book %d : ",i+1);
       scanf("%s%s%d",s[i].title,s[i].author,&s[i].price);
   }
   max=s[0].price;
   maxi=0;
   min=s[0].price;
   mini=0;
   printf("the details are : \n");
   for(i=0;i<n;i++)
   {
       if(max<s[i].price)
       {
           max=s[i].price;
           maxi=i;
       }
       if(min>s[i].price)
       {
           min=s[i].price;
           mini=i;
       }
   }
   for(i=0;i<n;i++)
   {
       printf("title : %s \t author : %s \t price : %d \n",s[i].title,s[i].author,s[i].price);
   }
   printf("\n\n");
   printf("the most expensive book is : %s\t , author : %s\t, price : %d\n",s[maxi].title,s[maxi].author,max);
   printf("the least expensive book is : %s\t , author : %s\t, price : %d\n",s[mini].title,s[mini].author,min);
   return 0;
}
