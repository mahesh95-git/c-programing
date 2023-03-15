#include <stdio.h>
#include <conio.h>
void swap(int *, int *);
void main()
{
    int a, b;
 printf("Write a program which swap two number using a call by reference\n");
    printf("program for call by reference");
    printf("\n enter any two numbers");
    scanf("%d%d", &a, &b);
    printf("\n values before swapping\n No1=%d \t No2=%d", a, b);
    swap(&a, &b);
    printf("\n values after swapping\n No1=%d \t No2=%d", a, b);
   
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}