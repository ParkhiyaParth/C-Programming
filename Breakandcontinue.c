#include<stdio.h>
#include<conio.h>
int main()
    {
        int i,age;
        for(i=0; i<10; i++)
           {
            printf("%d Enter Your Age\n",i);
            scanf("%d",&age);
            if(age>9)
              {
                continue;
              }
           } 
        return 0;   
    }