// #include<stdio.h>
// #include<conio.h>
// int dectobin(int n)
//      {
//         if(n==0)
//           {
//             return 0;
//           }
//         else
//           {
//             return (n%2 +10*dectobin(n/2));
//           }
//      }
// int main()
// {
//     int n1;
//     printf("Enter a number : ");
//     scanf("%d",&n1);
//     printf("dectobin=%d",dectobin(n1));
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int swap(int a)
//      {
//         temp=*n1;
//         *n1=*n2;
//         *n2=*temp;
//      }
// int main()
// {
//     int n1,n2;
//     printf("enter the n1 and n2 : ");
//     scanf("%d %d",&n1,&n2);
//     printf("before swap n1=%d n2=%d",n1,n2);
//     swap(n1,n2)
//     printf("After swap n1=%d n2=%d",n1,n2);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// struct addres
//      {
//         char pincode[55];
//         char city[55];
//      };
// struct student
//      {
//         char name[45];
//         float marks;
//         float cpi;
//         struct addres add;
//      };
// int main()
// {
//     struct student s1;
//     printf("Enter student name :");
//     scanf("%s",&s1.name);
//     printf("\nEnter student marks : ");
//     scanf("%f",&s1.marks);
//     printf("\nEnter student cpi : ");
//     scanf("%f",&s1.cpi);
//     printf("\nEnter student pincode : ");
//     scanf("%s",&s1.add.pincode);
//     printf("\nEnter student city : ");
//     scanf("%s",&s1.add.city);
//     printf("Student details");
//     printf("name : %s",s1.name);
//     printf("\nmarks : %f",s1.marks);
//     printf("\ncpi : %f",s1.cpi);
//     printf("\npincode : %s",s1.add.pincode);
//     printf("\ncity : %s",s1.add.city);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int N,i,*ptr;
//     printf("Enter N : ");
//     scanf("%d",&N);
//     ptr=(int*)calloc(N,sizeof(int));
//     for(i=0; i<N; i++)
//        {
//         scanf("%d",ptr);
//         ptr++;
//        }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr,n;
//     ptr=(int*)malloc(10*sizeof(int));
//     for(int i=0; i<3; i++)
//        {
//         printf("Enter the value number %d of this array",i);
//         scanf("%d",&ptr[i]);
//        }
//     return 0;
// }

// #include <stdio.h>
// // #include <conio.h>
// int main()
// {
//     FILE *ptr = NULL;
//     ptr = fopen("myfile.txt", "r");
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i=1,num,sum=0;
//     while(i<=5)
//          {
//             printf("Enter number : ");
//             scanf("%d",&num);
//             sum=sum+num;
//             i++;
//          }
//     printf("Sum=%d",sum);     
//     return 0;
// }

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,marks[5];
    for(i=0;i<=5;i++)
       {
        printf("Enter marks : ");
        scanf("%d",&marks[i]);
       }
    for(i=0; i<=5; i++)
       {
        printf("marks : %d\n",marks[i]);
       }   
    return 0;
}