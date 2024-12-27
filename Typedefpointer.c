#include <stdio.h>
#include <conio.h>
int main()
{
    //int *a, b;  //this is known as a pointer of a and only b 
                //this is not consider b as a pointer so it give a error 
    typedef int* integerpointer;
    integerpointer a,b;            
    int c=90;
    a = &c;
    b = &c;
    return 0;
}