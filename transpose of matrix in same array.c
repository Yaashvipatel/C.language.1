//transpose of matrix in same array 
#include<stdio.h>
int main()
{
    int i,j,m,n,arr[100][100],temp;
    printf("enter m,n:");
    scanf("%d%d",&m,&n);
    printf("enter array :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}
