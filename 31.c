#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10]={1,4,3,32,45};
    int *p=arr;
    int i=0;
    while(i<5)
         {
            printf("Position for %d is %d\n",i,*(p+i));
            i++;
         }
    return 0;
}