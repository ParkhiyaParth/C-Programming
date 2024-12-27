#include<stdio.h>
#include<conio.h>
int main()
    {
        float c,f;
        printf("Enter temperature in celcious : ");
        scanf("%f",&c);
        f=1.8*c+32;
        printf("Answer=%f",f);
        return 0;
    }