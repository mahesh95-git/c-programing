#include<stdio.h>
#include<conio.h>
struct student{
    int rollno;
    char name[50];
    char address[100];
    int array[10];
    float percentage;
};
void main(){
    struct student a;
    float total;
 //   printf("Write programs which create student structure which accept stud rollno, student name, address, subject marks, and percentage and display same on screen");
printf("\nenter sa rollno:");
scanf("%d",&a.rollno);
printf("enter your name:");
scanf("%s",a.name);
printf("enter address:");
scanf("%s",a.address);
printf("enter subject marks\n");
printf("c part 2:");
scanf("%d",&a.array[0]);
printf("wed :");
scanf("%d",&a.array[1]);
printf("HRM:");
scanf("%d",&a.array[2]);
printf("operating system:");
scanf("%d",&a.array[3]);
printf("DBMS:");
scanf("%d",&a.array[4]);

printf("=====================================\n");
printf("rollno:%d\n",a.rollno);
printf("name:%s\n",a.name);
printf("address:%s\n",a.address);
printf("c part 2:%d",a.array[0]);
printf("wed :%d\n",a.array[1]);
printf("HRM:%d\n",a.array[2]);
printf("operating system:%d\n",a.array[3]);
printf("DBMS:%d\n",a.array[4]);

for(int i=0;i<5;i++){
    total+=a.array[i];
    
    }

   a.percentage=((total/500)*100);
printf("%f\n",a.percentage);
printf("=========================================");

}
