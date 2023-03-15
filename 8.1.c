#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
void main(){
   
     int a, b;
 printf("Write a program which swap two number using a call by value\n");
    printf("program for call by call by value");
    printf("\n enter any two numbers");
    scanf("%d%d", &a, &b);
    printf("\n values before swapping\n No1=%d \t No2=%d", a, b);
    swap(&a, &b);
    printf("\n values after swapping\n No1=%d \t No2=%d", a, b);
   
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

