#include<stdio.h>
#include<conio.h>

int arrayRev(int arry[])
     {
        int i;
        for(i=0; i<=6; ++i)
           {
            printf("The value array is %d : %d\n",i,arry[i]);
           }
     }

void func1(int arry[])
     {
        int temp;
        temp=arry[0];
        arry[0]=arry[6];
        arry[6]=temp;
     }     

void func2(int arry[])
     {
        int temp;
        temp=arry[1];
        arry[1]=arry[5];
        arry[5]=temp;
     }          

void func3(int arry[])
     {
        int temp;
        temp=arry[2];
        arry[2]=arry[4];
        arry[4]=temp;
     }               

int arrayRev1(int arr[])
    {
        for (int i=0; i<=6; ++i)
        {
            printf("The value array is %d : %d\n",i,arr[i]);
        } 
    }     
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    arrayRev(arr);
    func1(arr);
    printf("After swapping first and the last element in the program %d and %d\n",arr[0],arr[6]);
    func2(arr);
    printf("After swapping second and the second last element in the program %d and %d\n",arr[1],arr[5]);
    func3(arr);
    printf("After swapping second and the second last element in the program %d and %d\n",arr[2],arr[4]);
    int arr1[]={7,6,5,4,3,2,1};
    arrayRev1(arr1);
    return 0;
}


// another programme
// #include <stdio.h>
// //making a progmamme in which a function will return the reverse of a array before and after
// void func1(int arg[])
// {
//     printf("before reverse :-\n");
// for (int i = 0; i < 6; i++)
// {
//     printf("%d ",arg[i]);
// }
// printf("\n");
// printf("After reverse :-\n");
// for (int j = 5; j > -1; j--)
// {
//     printf("%d ",arg[j]);
// }
// }
// int main()
// {
// int s1[]={1,2,3,4,5,6};
// func1(s1);
// return 0;
// }