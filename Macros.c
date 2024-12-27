#include <stdio.h>
#include <conio.h>
int main()
{
    printf("File Name is %s\n", __FILE__);
    printf("Time is %s\n", __TIME__);
    printf("Date is %s\n", __DATE__);
    printf("Line number is %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);
    return 0;
}
