// #include<stdio.h>
// #include<conio.h>
// void changevalue(int* a,int* b)
//      {
//         int temp;
//         temp=*a;
//         *a=temp+*b;
//         *b=*b-temp;
//      }
// int main()
// {
//     int a = 9, b = 10;
//     printf("The value of a is : %d \n The value of b is : %d \n", a , b );
//     changevalue(&a , &b);
//     printf("The value of a now is : %d \n The value of b now is : %d  ",a , b );
//     return 0;
// }    

#include<stdio.h>
#include<conio.h>
int main()
{
    char name[]="PARTH";
    char *ch=name;
    while(*ch!='\0')
         {
            printf("Address of %c is %u\n",*ch,ch);
            ch++;
         }
    return 0;
}