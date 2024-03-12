//upper triangular 
#include<stdio.h>
int main()
{
    int arr[100][100],i,j,r,c,f=0;
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
            {if(arr[i][j]==0&&i>j)
            {f=1;
                break;
            }
            }
        }
    }
    if(f==1)
    {printf("upper");}
    else
    {printf("glt hai:");}
    return 0;
}
