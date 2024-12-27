#include <stdio.h>

struct Person {
    char name[20];
    int age;
    float height;
};

int main() {
    struct Person p;

    printf("Size of struct Person is %ld bytes\n", sizeof(p));

    return 0;
}
