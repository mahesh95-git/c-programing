#include <stdio.h>
#include <conio.h>
extern int c = 3;

int display()
{
    static int s = 0;
    s++;

    return s;
}

void main()
{
    int a = 10; // auto
    int s;

    register int r = 40;
    printf("Write a program to demonstrate storage classes\n");
    printf("auto class:%d\n", a);
    printf("register class:%d\n", r);
    printf("extern class:%d\n", c);

    printf("static class\n");
    for (int i = 1; i <= 5; i++)
    {
        s = display();
        printf("c=%d\n", s);
    }
}
