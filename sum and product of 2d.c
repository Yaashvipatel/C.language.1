//C Program to Read a Matrix and find Sum and Product of all elements
#include<stdio.h>
int main()
{
    int arr[100][100],i,j,r,c,sum=0,pro=1;
    printf("enter rows and colums :");
    scanf("%d%d",&r,&c);
    printf("enter array:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nelement :");
            scanf("%d",&arr[i][j]);
        }
    }
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
            pro=pro*arr[i][j];
        }
    }
    
    printf("sum of all elements of array is : %d",sum);
    printf("\nproduct of all elements of array is : %d",pro);
    return 0;
}
