#include<stdio.h>
#include<conio.h>
void sum_10_number(){
     int sum = 0;
    for (int i = 1; i <= 10; i++)
    { 
        sum += i;
    }
    printf("addition 10 number is:%d",sum);
}
void main(){
    printf("functions without arguments and without return values\n");
    sum_10_number();
}
