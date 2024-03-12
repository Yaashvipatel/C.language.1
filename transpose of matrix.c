//transpose of matrix
#include<stdio.h>
int main()
{
    int i,j,m,n,arr[100][100],brr[100][100];
    printf("enter m,n:");
    scanf("%d%d",&m,&n);
    printf("enter array :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            brr[j][i]=arr[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}
