//1d array reverse using pass by reference :

#include<stdio.h>
int rev(int *p, int n )
{
    int i,j,temp;
   for( i=0,j=n-1;i<j;i++,j--)
    {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    } 
    return (*(p+i));
}
int main()
{
    int arr[100],n,i,j,temp;
    printf("enter size of array :");
    scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
    {
        printf("\nelement:");
        scanf("%d",&arr[i]);
    }
    rev(arr,n);
    printf("sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}
