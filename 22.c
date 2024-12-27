// Read five persons height and weight and count the number of person having height greater than 170 and weight less than 50.

#include<stdio.h>
#include<conio.h>
int main()
{
    int per,height,weight,a=0;
    for(per=1; per<=3; per++)
       {
        printf("Enter For %d person height and weight : \n",per);
        scanf("%f %f",&height,&weight);
        if(height>170)
          {
            if(weight<50)
              {
                a++;
              }
          }
       }
    printf("This is the persons %d",a);   
    return 0;
}