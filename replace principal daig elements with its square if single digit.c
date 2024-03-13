//replace principal daig elements with its square if single digit
#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100][100],i,j,m,n;
    printf("enter m x n : ");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                if(arr[i][j]<10)
                {
                    arr[i][j]=pow(arr[i][j],2);
                }
            }
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
