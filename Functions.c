#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
void printstar(int n)
     {
        int i;
        for(i=1; i<=n; i++)
           {
             printf("*");
           }
     }
int takenumber()
    {
        int num;
        printf("Enter The Number ",num);
        scanf("%d",&num);
        return num;
    }    

void myname()
    {
        printf("Parth Parkhiya");
    }    
int main()
    {
        int a,b,c;
        a=1;
        b=3;
        c=a+b;
        printstar(5);
        c = takenumber();
        printf("The Number Entered Is %d",c);
        myname();
    }    