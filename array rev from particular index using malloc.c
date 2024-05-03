
//reverse from particular index
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,j,n,x,*arr,temp;
    printf("\t************INPUT************\n");
    printf("enter the size of array : ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nelement : ");
        scanf("%d",&*(arr+i));
    }
    printf("enter the index from where to sort : ");
    scanf("%d",&x);
    for(i=x,j=n-1;i<j;i++,j--)
    {
        temp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=temp;
    }
    printf("\t************OUTPUT************\n");
    printf("after reversing array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(arr+i));
    }
    return 0;
}
