#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int roll_no;
    char name[20];
    char name_dept[30];
    int nc;
    char name_c[30][20];
    int yoj;
};
void read(struct student *,int);
void display(struct student*,int);
main ()
{
    int n;
    struct student *s;
    s=(struct student*)malloc(sizeof(struct student)*n);
    printf("Enter number of students\n");
    scanf("%d",&n);
    read(s,n);
    display(s,n);
}
void read(struct student *s,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter roll number\n");
        scanf("%d",&s[i].roll_no);
        printf("Enter student name\n");
        scanf("%s",s[i].name);
        printf("Enter dept name\n");
        scanf("%s",s[i].name_dept);
        printf("Enter number of courses\n");
        scanf("%d",&s[i].nc);
        printf("Enter name of courses\n");
        for(j=0;j<s[i].nc;j++)
        {
         scanf("%s",s[i].name_c);
        }
        printf("Enter year of joining\n\n");
        scanf("%d",&s[i].yoj);

    }
}
void display(struct student *s,int n)
{
        int i,j;
        for(i=0;i<n;i++)
        {
        printf("ROLL NUMBER:%d\n",s[i].roll_no);
        printf("STUDENT NAME:%s\n",s[i].name);
        printf("DEPARTMENT:%s\n",s[i].name_dept);
        printf("NUMBER OF COURSES: %d",s[i].nc);
        for(j=0;j<s[i].nc;j++)
        {
         printf("COURSE NAME: %s\n",s[i].name_c[j]);
        }
        printf("YEAR OF JOINING: %d\n",s[i].yoj);
        }

}
