#include<stdio.h>
int add(int a, int b);
int sub(int s, int t);
int mul(int m, int l);
int divi(int d, int v);

int main()
{
    int x,y,choice;
    
    printf("\n\n---------------MENU--------------\n\n");
    printf("1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    
    printf("\n\nEnter Your choice : ");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        printf("Enter two integers : ");
        scanf("%d %d",&x,&y);
        add(x,y);
    }
    else
    {
        printf("Invalid choice !!!!");
    }
}

int add(int a, int b)
{
    printf("%d",a+b);
}

