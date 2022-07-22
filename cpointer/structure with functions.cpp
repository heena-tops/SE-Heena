#include<stdio.h>

struct student
{
    char name[20];
    int age;
};

void display(struct student s);

main()
{
    struct student s1;
    
    printf("Enter your name : ");
    scanf("%s",&s1.name);
    
    printf("Enter your age : ");
    scanf("%d",&s1.age);
    
    display(s1);
}

void display(struct student s)
{
    printf("\n\n-----------------Display Student Info ---------------------\n\n");
    
    printf("Student name : %s",s.name);
    printf("\nStudent age : %d",s.age);
}

