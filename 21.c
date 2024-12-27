// Write a program to calculate average and total of 5 students for 3 subjects (use nested for loops)

#include <stdio.h>
#include <conio.h>
int main()
{
    int stu = 0,sum=0,marks,sub;
    float avg;
    for (stu = 1; stu <= 5; stu++)
    {
        printf("Enter marks for student %d : \n", stu);
        for (sub = 1; sub <= 3; sub++)
        {
            printf("Enter marks for subject %d : ", sub);
            scanf("%d", &marks);
            sum=sum+marks;
        }
        printf("For student %d",stu);
        printf("Sum=%d",sum);
        avg=sum/stu;
        printf("Avg=%f",avg);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int student = 0, sum = 0, marks = 0, sub;
//     for (student = 0; student < 5; student++)
//     {
//         printf("\n Enter Marks for Student - %d ", student + 1);
//         for (sub = 0; sub < 3; sub++)
//         {
//             printf("\nEnter Marks for Subject - %d ", sub + 1);
//             scanf("%d", &marks);
//             sum = sum + marks;
//         }
//         printf("\n For Student - %d : ", student + 1);
//         printf("\n Sum = %d", sum);
//         printf("\n Average = %.2f", ((float)sum) / sub);
//     }
//     return 0;
// }