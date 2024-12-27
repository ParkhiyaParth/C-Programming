#include<stdio.h>
#include<conio.h>
int main()
    {
     int a=70;
     int *ptr=&a;
     printf("Tha value of a is %d\n",a);
     printf("Tha value of a is %d\n",*ptr);
     printf("Tha value of a is %p",&*ptr);
     return 0;
    }