#include<stdio.h>
struct bank{
    char name[100];
    int no;
    int bal;
};

void deposit(struct bank s[],int n,int i)
{
    int x;
    printf("enter the amount you want to deposit : ");
    scanf("%d",&x);
    s[i].bal=s[i].bal+x;
    printf("\nyour balance is : %d\n",s[i].bal);
}

void withdrawl(struct bank s[],int n,int i)
{
    int x;
    printf("enter the amount you want to withdraw : ");
    scanf("%d",&x);
    s[i].bal=s[i].bal-x;
    printf("\nyour balance is : %d\n",s[i].bal);
}

int main()
{
    struct bank s[200];
    int n,i,j;
    printf("enter no of customers : ");
    scanf("%d",&n);
    printf("enter details : \n");
    for(i=0;i<n;i++)
    {
        printf("enter name , account number , and balance : ");
        scanf("%s%d%d",s[i].name,&s[i].no,&s[i].bal);
        printf("press '1' to deposit and '2' to withdraw : ");
        scanf("%d",&j);
        switch(j)
        {
            case 1 : 
            {
                deposit(s,n,i);
                break;
            }
            case 2 :
            {
                withdrawl(s,n,i);
            }
        }
    }
    return 0;
}
