#include <stdio.h>
#include <conio.h>
typedef struct student
{
    int id;
    int marks;
}std;
int main()
{
    std s1, s2;
    s1.id = 54;
    s2.id = 58;
    s1.marks = 89;
    s2.marks = 78;
    printf("Value of s1's ID is %d\n", s1.id);
    printf("Value of s2's ID is %d\n", s2.id);
    printf("Marks of s1's ID is %d\n", s1.marks);
    printf("Marks of s2's ID is %d\n", s2.marks);
    return 0;
}