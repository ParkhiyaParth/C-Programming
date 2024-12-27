#include<stdio.h>
#include<conio.h>
struct student
     {
        char name[20];
        char branch[20];
        int totalmarks;
     }
student[50];    
int main()
{
    int n=50,i;
    for(i=0;i<=n;i++)
       {
        printf("Enter Student Name : ");
        scanf("%s",&student[i].name);
        printf("Enter Student Branch : ");
        scanf("%s",&student[i].branch);
        printf("Enter Student obtained total marks : ");
        scanf("%d",&student[i].totalmarks);
       }
    for(i=0;i<=n;i++)
       {
        printf("Student Name : %s\n Student branch : %s\n Student total obtained marks : %d",student[i].name,student[i].branch,student[i].totalmarks);
       }
    return 0;
}