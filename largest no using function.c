//find the largest no among 3 using f(x)
#include<stdio.h>
int large(int a, int b, int c)
{
    if(a==b&&b==c)
    {return a;}
    else{
    int max;
    if(a>b&&a>c)
    max=a;
    if(b>a&&b>c)
    max=b;
    if(c>a&&c>b)
    max=c;
    return max;
    }
}
int main()
{
    int a,b,c,res,l;
    printf("enter 3 nos :");
    scanf("%d%d%d",&a,&b,&c);
    res =large(a,b,c);
    printf("the largest no is :%d",res);
    return 0;

}
