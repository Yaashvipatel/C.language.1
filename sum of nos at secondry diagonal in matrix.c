//sum of nos at secondry diagonal in matrix.c
#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100][100],i,j,m,n,sum=0;
    printf("enter m x n : ");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i+j==m-1)
            {
                sum=sum+arr[i][j];
            }
        }
    
    }
    printf("sum is :%d",sum);
    return 0;

}
