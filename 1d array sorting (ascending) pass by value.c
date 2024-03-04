//1d array sorting (ascending) using pass by value :

#include<stdio.h>
int swap(int arr[], int n )
{
    int i,j,temp;
   for( i=0;i<n;i++)
    {
        for( j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } 
    return (arr[i]);
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
    swap(arr,n);
    printf("sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}
