/*
C program to write all the members of an array of structures to a file
using fwrite()

*/

#include <stdio.h>
struct student
{
   char name[50];
   float height;
};

int main(){
    struct student stud1[5], stud2[5];   
    FILE *fptr;
    int i;

    fptr = fopen("Struct_Array.txt","w");
    for(i = 0; i < 5; ++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(stud1[i].name);

        printf("Enter height: "); 
        scanf("%f", &stud1[i].height); 
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);

    fptr = fopen("Struct_Array.txt", "r");
    fread(stud2, sizeof(stud2), 1, fptr);
    for(i = 0; i < 5; ++i)
    {
        printf("\n\nName: %s\nHeight: %.2f", stud2[i].name, stud2[i].height);
    }
    fclose(fptr);
}
