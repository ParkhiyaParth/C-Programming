#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    printf(" Address at first element of 3 array %d\n",&a[0]);
    printf(" Address at first element of 3 array %d\n",a);
    printf("Address at Second element of array is %d\n",&a[1]);
    printf("Address at Second element of array is %d\n\n",a+1);

    printf(" Value at first element of 3 array %d\n",*(&a[0]));
    printf(" Value at first element of 3 array %d\n",a[0]);
    printf(" Value at first element of 3 array %d\n",*(a));
    printf("Value at Second element of array is %d\n",*(&a[1]));
    printf("Value at Second element of array is %d\n",a[1]);
    printf("Value at Second element of array is %d",*(a+1));
    // a-- //this line throw error
    // aptr
    return 0;
}