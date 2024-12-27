/*
  convert unit conversion using switch parameter
  kms to miles
  inches to foot
  cms to inches
  pound to kgs
  inches to meters

*/

#include<stdio.h>
#include<conio.h>
int main()
    {
      
        char op,Q;
        float km,inches,cms,pound;
        start:
        printf(" Enter 1 for kms to miles\n Enter 2 for inches to foot \n Enter 3 for cms to inches\n Enter 4 for pound to kgs \n Enter 5 for inches to meters\n Enter Q to quit\n");
        scanf("%c",&op,&Q);
        switch(op)
             {
                case 1:
                   printf("Enter value in kilometers for convert it into miles : ");
                   scanf("%f",&km);
                   printf("Answer=%f", km*0.62137119);
                   break;

                case 2:
                   printf("Enter value in inches for convert it into in foot : ");
                   scanf("%f",&inches);
                   printf("Answer=%f", inches*0.08333333);
                   break;

                case 3:
                   printf("Enter value in cms for convert it into in inches : ");
                   scanf("%f",&cms);
                   printf("Answer=%f", cms*0.39370079);
                   break;

                case 4:
                   printf("Enter value in pound for convert it into in kgs : ");
                   scanf("%f",&pound);
                   printf("Answer=%f", pound*0.45359237);
                   break;

                case 5:
                   printf("Enter value in inches for convert it into in meters : ");
                   scanf("%f",&inches);
                   printf("Answer=%f", inches*0.0254);
                   break;          

                case 'Q':
                   goto end;
                   
                default :
                   printf("Enter the valid number\n");
                   break;
             }  
        goto start;   
        end:
        return 0;     
    }