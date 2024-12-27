#include <stdio.h>
#include <conio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char name[];
};

int main()
{
    struct student parth, sandip;
    parth.id = 1;
    sandip.id = 2;
    parth.marks = 56;
    sandip.marks = 58;
    printf("Parth got %d marks\n",parth.marks);
    printf("Sandip got %d marks\n",sandip.marks);
    printf("Parth's id is %d\n",parth.id);
    printf("Sandip's id is %d\n",sandip.id);
    strcpy(parth.name,"the student of the year");
    printf("Parth is %s",parth.name);
    return 0;
}