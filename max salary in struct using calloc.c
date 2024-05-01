//make a structure employee , take input from n no. of employees and find the member having highest salary :
//it should have the following members : id , name , salary ;
#include<stdio.h>
#include<stdlib.h>
struct emp{
    char name[100];
    int id;
    int sal;
};
int main()
{
    struct emp *p;
    int n , i ,j, max, maxi;
    printf("enter the no of records n : ");
    scanf("%d",&n);
    p=(struct emp *)calloc(n,sizeof(struct emp));
    printf("enter details : \n");
    for(i=0;i<n;i++)
    {
        printf("\nenter name , id and salary for emp %d : ", i+1);
        scanf("%s%d%d",(p+i)->name,&(p+i)->id,&(p+i)->sal);
    }
    max=(p+0)->sal;
    maxi=0;
    for(i=0;i<n;i++)
    {
        if(max<(p+i)->sal)
        {
            max=(p+i)->sal;
            maxi=i;
        }
    }
    free(p);
    printf("the details of the employee having highest salary is : \n");
    printf("name , id and salary of emp : %s \t %d \t %d",(p+maxi)->name,(p+maxi)->id,max);
    return 0;
}
