//1d array sorting (ascending) using pass by reference :

#include<stdio.h>
int swap(int *p, int n )
{
    int i,j,temp;
   for( i=0;i<n;i++)
    {
        for( j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
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
    swap(arr,n);
    printf("sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}
