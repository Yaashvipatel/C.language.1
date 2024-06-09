//smallest even no in matrix: 
#include<stdio.h>
int main()
{
    int arr[100][100],brr[100];
    int i,j,n,m,min;
    printf("enter m and n : ");
    scanf("%d%d",&m,&n);
    printf("enter elements : \n");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
            scanf("%d",&arr[i][j]);
       }
   }
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(arr[i][j]%2==0)
           {
               brr[i]=arr[i][j];
           }
           else
           {
               
           }
       }
   }
   min=brr[0];
   for(i=0;i<m;i++)
   {
       if(min>brr[i])
       {min=brr[i];}
   }
   printf("the smallest even no is : %d",min);
   return 0;
}
