#include<stdio.h>
#include<conio.h>
void starpattern(int rows)
     {
      for(int i=1; i<rows; i++)
         {
            for(int j=1; j<=i; j++)
               {
                printf("*");
               }
            printf("\n");   
         }
     }

void reversedstarpattern(int rows)     
     {
        for(int i=1; i<rows; i++)
           {
            for(int j=1; j<=rows-i; j++)
               {
                printf("*");
               }
            printf("\n");   
           }
     }
int main()
{
    int rows,num;
    start:
    printf("Enter 0 for print star pattern and Enter 1 for reversed star pattern : ");
    scanf("%d",&num);
    printf("How many rows do you want?");
    scanf("%d",&rows);
    switch(num)
          {
            case 0:
                starpattern(rows);
                break;

            case 1:
                reversedstarpattern(rows);
                break;

            default:
                printf("Enter only 0 or 1 for print pattern\n");
                break;        
          }
    goto start;      
    return 0;
}