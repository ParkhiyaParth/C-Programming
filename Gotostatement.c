#include<stdio.h>
#include<conio.h>
int main()
    {
        label:
           printf("We are inside the label\n");
           goto end;
        printf("Hello World\n");
        goto helloworld;
        goto returns;
        goto label;
        end:
           printf("We are at end\n");

        returns:
           printf("We are at returns\n");   

        helloworld:
           printf("We are at hello world\n");   
        return 0;   
    }