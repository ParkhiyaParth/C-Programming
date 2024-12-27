#include <stdio.h>
#include <conio.h>
int func(int array[])
{
    int i;
    for (i = 0; i <= 2; ++i)
    {
        printf("The value of array %d is : %d\n", i, array[i]);
    }
    array[0] = 56; // very important thing that is you change value at here, so it get reflacted in main.
}

int func1(int array[])
{
    array[1] = 45;
}

void func2(int *ptr)
{
    for (int i = 0; i <=2; ++i)
    {
        printf("The value of array %d is : %d\n",i,*(ptr+i));
    }
    *(ptr+2)=567;
}
int main()
{
    int arr[] = {1, 25, 3};
    int arr1[] = {13, 45, 43};
    func(arr);
    printf("The value of index 0 is : %d\n", arr[0]);
    func1(arr1);
    printf("The value of index 1 is : %d", arr1[1]);
    // func2(arr);
    // func2(arr);
    return 0;
}