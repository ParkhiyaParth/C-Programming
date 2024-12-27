#include <stdio.h>

int b = 34;
int ret()
{
    return 43 * 3;
}
int func1(int b1)
{
    static int myvar = 45;
    printf("the value of myvar is %d", myvar);
    myvar++;
    return myvar + b1;
}
int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    return 0;
}