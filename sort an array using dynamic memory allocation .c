//sort an array using dynamic memory allocation in c;
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,j,*arr,n,temp;
    printf("enter the size of array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("enter array : \n");
    for(i=0;i<n;i++)
    {
        printf("\nelement : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("after sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
