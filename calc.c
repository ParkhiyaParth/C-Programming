#include<stdio.h>
int main()
  
        {
            char op;
            float n1,n2;
            printf("Enter number 1 : ");
            scanf("%f",&n1);
            printf("Enter number 2  : ");
            scanf("%f",&n2);
            printf("Enter operators(+,-,*,/) : ");
            fflush(stdin);
            scanf("%c",&op);
            switch(op)
                  {
                    case '+':
                        printf("%.1f + %.1f = %.1f",n1, n2, n1+n2);
                        break;
                    case '-' : 
                        printf("%.1f - %.1f = %.1f",n1, n2, n1-n2);
                        break;
                    case '*' :
                        printf("%.1f * %.1f = %.1f",n1, n2, n1*n2);
                        break;
                    case '/' : 
                        printf("%.1f / %.1f = %.1f",n1, n2, n1/n2);
                        break;  
                    default : 
                        printf("Enter valid operation");
                  }     
         return 0;         
        }