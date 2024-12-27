#include<stdio.h>
#include<conio.h>
int main()
{
    char a = '3';
    char *ptra=&a;
    printf("%d\n",ptra);
    ptra--;
    printf("%d\n",ptra);
    printf("%d",ptra+2); //ptra+1 is defined that value of ptra is increses with int bytes as int byte is 4 so value of ptra is value+4
    return 0;
}
// output is print according to architecture