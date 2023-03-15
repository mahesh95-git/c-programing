#include<stdio.h>
#include<conio.h>
void display_table(int a){ // formal arguments
    int i;
    for(i=1;i<=10;i++){
        printf(" %d*%d=%d\n",a,i,a*i);
    }
}
void main(){
    int a;
    printf("Write a program to demonstrate actual arguments and formal arguments");
    printf("\nenter a number to print table:");
    scanf("%d",&a);
    display_table(a);// actual arguments 
}
