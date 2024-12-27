#include<stdio.h>
#include<conio.h>
void changevalue(int* add)
     {
        *add=0;
     }
int main()
{
    int a=78,b=89;
    printf("The value of a is %d\n",a);
    changevalue(&a);
    printf("The value a is now %d",a);
    return 0;
}