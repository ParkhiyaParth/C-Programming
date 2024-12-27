#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[]="Parth";
    char s2[]=" Parkhiya";
    char s3[526];
    puts(strcat(s1,s2));
    printf("The length of S1 is : %d\n",strlen(s1));
    printf("The length of S2 is : %d\n",strlen(s2));
    printf("The reverse string of S1 is : %s\n",strrev(s1));
    printf("The reverse string of S2 is : %s\n",strrev(s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("The strcmp returned for S1,S2 is : %d",strcmp(s1,s2));
    return 0;
}    