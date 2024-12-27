#include<stdio.h>
#include<conio.h>
struct student
     {
        int rollno;
        int marks[3];
     }s[3];
int main()
{
    int i,j,sum=0;
    
    for(j=1;j<=3;j++)
       {
        printf("Enter rollno for %d st student : \n",j);
        scanf("%d",&s[j].rollno);
        printf("Enter marks for 3 subjects\n");
        for(i=1;i<=3;i++)
           {
            scanf("%d",&s[i].marks);
            sum=sum+marks;
           }
       }      
    
    return 0;
}