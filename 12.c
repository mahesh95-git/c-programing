#include<stdio.h>
#include<conio.h>
union student{
    int rollno;
    char name[50];
    char address[100];
    int array[10];
    float percentage;
};
void main(){
    union student a;
    printf("Write a program based on union\n");
printf("\nenter a rollno:");
scanf("%d",&a.rollno);
printf("enter your name:");
scanf("%s",&a.name);
printf("enter address:");
scanf("%s",&a.address);
printf("=========================\n");
printf("rollno:%d\n",a.rollno);
printf("name:%s\n",a.name);
printf("address:%s\n",a.address);
}
