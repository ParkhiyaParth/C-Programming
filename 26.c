// Write a program to find maximum element from 1-Dimensional array.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,a[20],i,max=0;
    printf("Enter how many elements do you want?");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
       {
        printf("Enter [%d] element : ",i);
        scanf("%d",&a[i]);
       }
    for(i=0; i<=num; i++)
       {
        if(max<a[i])
           max=a[i];   
       }   
    printf("Max array is %d",max);  
    return 0;
}