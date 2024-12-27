#include <stdio.h>
#include <conio.h>
struct driver
{
    char name[20];
    char dl[20];
    char route[20];
    float kms;
};
int main()
{
    struct driver d1;
    printf("Hello!!\n");
    printf("This is PARTH travel Agency");
    int n, i;
    printf("How many drivers you want to enter : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d Driver name : ", i);
        scanf("%s", &d1.name);
        printf("\nEnter Driver's Drving licence number : ");
        scanf("%s", &d1.dl);
        printf("\nEnter Driver's route that he travel daily: ");
        scanf("%s", &d1.route);
        printf("Enter how much is he travel in him travel career : ");
        scanf("%f", &d1.kms);
    }
    printf("\n**********Printing Information of this all driver**********\n");
    int j;
    for (j = 1; j <= n; j++)
    {
        printf("For %d driver\n", j);
        printf("Name is %s\n", d1.name);
        printf("Driving licence number is %s\n", d1.dl);
        printf("Route is %s\n", d1.route);
        printf("Travel is %f\n", d1.kms);
    }
    return 0;
}