#include<stdio.h>
int Add(int a, int b);

mian()
{
    int choice;
    int x,y;
    
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    
    printf("\n\n---------------MENU----------------\n\n");
    printf("1. Addition ");
    printf("2. Subtraction ");
    printf("3. Multiplication ");
    printf("4. Division ");
    
    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        Add(x,y);
    }
}

int Add(int a, int b)
{
    printf("Addition is : %d",a+b);
}
