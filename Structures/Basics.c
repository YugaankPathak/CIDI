#include<stdio.h>
struct H
{   char name [50];
    int roll;
    char branch[20];
    int marks;
}h;
union J
{   char name [50];
    int roll;
    char branch[20];
    int marks;
}j;
void Structure()
{
    struct H h;
    printf("Enter the name of student\n");
    scanf("%s",& h.name);
    printf("Enter the roll number of student\n");
    scanf("%d",& h.roll);
    printf("Enter the branch of student\n");
    scanf("%s", & h.branch);
    printf("Enter the Marks of student in MST\n");
    scanf("%d",& h.marks);
    printf("Student name: %s\n",h.name);
    printf("Student Roll Number: %d\n",h.roll);
    printf("Student Branch: %s\n", h.branch);
    printf("Marks: %d\n",h.marks);
    if(h.marks>=8)
    printf("Result: Pass");
    else
    printf("Result: Fail");
}
void Union()
{ printf("Enter the name of student\n");
    scanf("%s",& j.name);
    printf("Enter the roll number of student\n");
    scanf("%d",& j.roll);
    printf("Enter the branch of student\n");
    scanf("%s", & j.branch);
    printf("Enter the Marks of student in MST\n");
    scanf("%d",& j.marks);
    printf("Student name: %s\n",j.name);
    printf("Student Roll Number: %d\n",j.roll);
    printf("Student Branch: %s\n", j.branch);
    printf("Marks: %d\n",j.marks);
    if(j.marks>=8)
    printf("Result: Pass");
    else
    printf("Result: Fail");
    }
    void main()
    {int i;
    printf("Yugaank Pathak H-77\n");
    printf("Press 1 to initialize a structure and 2 to initialize a Union\n");
    scanf("%d",&i);
    if(i==1)
    Structure();
    if(i==2)
    Union();
    }
