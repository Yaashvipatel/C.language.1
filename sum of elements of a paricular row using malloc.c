//sum of elements of a paricular row :
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **arr,i,x,j,m,n,sum=0;
    printf("enter m x n :");
    scanf("%d%d",&m,&n);
    arr=(int **)malloc(m*sizeof( int *));
    for(i=0;i<m;i++)
    {
        arr[i]=(int *)malloc(n*sizeof( int ));
    }
    printf("enter elements :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nelement :");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter row : ");
    scanf("%d",&x);
    if(x-1>m)
    {
        printf("not possible");
    }
    else
    {
    for(j=0;j<n;j++)
    {
        sum=sum+arr[x-1][j];
    }
    printf("%d",sum);
    }
    free(arr);
    return 0;
}
