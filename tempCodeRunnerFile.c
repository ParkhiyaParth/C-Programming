#include <stdio.h>
#include <conio.h>
int main()
{
    int stu = 0,sum=0,marks;,sub;
    float avg;
    for (stu = 1; stu <= 5; stu++)
    {
        printf("Enter marks for student %d : \n", stu);
        for (sub = 1; sub <= 3; sub++)
        {
            printf("Enter marks for subject %d : ", msub);
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