//struct student with basic details.c
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    int id ;
    char name[100];
};
int main()
{
    int i,n;
    printf("enter n :");
    scanf("%d",&n);
    struct student s[n];
    printf("enter roll nos of students :\n");
  for (int i = 0; i < n; i++)
  {
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll);
    }
    printf("enter id of students :\n");
  for (int i = 0; i < n; i++)
    {
      printf("Enter id of student %d: ", i+1);
      scanf("%d", &s[i].id);
    }
  for (int i = 0; i < n; i++)
    {
      printf("Enter name of student %d: ", i+1);
      scanf("%s", s[i].name);
    }

    printf("\nDetails of all students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d\n", i+1);
        printf("Roll number: %d\n", s[i].roll);
        printf("id: %d\n", s[i].id);
        printf("name : %s\n",s[i].name);
    }

    return 0;
}
    
