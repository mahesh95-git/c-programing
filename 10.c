#include<stdio.h>
#include<conio.h>
void factorial(int a){
    int fact=1;
  for(int i=1;i<=a;i++){
    fact=fact*i;
  }
printf("factoril of given number is:%d",fact);
}
void main(){
    int a;
    printf("Write a program to calculate factorial of given number by using user defined function");
printf("\nenter a number:");
scanf("%d",&a);
factorial(a);
getch();}
