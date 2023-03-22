#include <stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    int salary;
};

void display_all(struct employee a[5]){
int i;
printf("employee\tid\tname\tsalary\n");
for( i=0;i<1;i++){
    printf("%d\t\t%d\t%s\t%d\n",i,a[i].id,a[i].name,a[i].salary);

}
}

 void Search_by_name( struct employee a[5]){
    char name[50],i;
    printf("ente a name:");
    scanf("%s",&name);
    printf("employee\tid\tname\tsalary\n");
    for( i=0;i<5;i++){
	if(strcmp(name,a[i].name)==0){
    printf("%d\t\t%d\t%s\t%d\n",i,a[i].id,a[i].name,a[i].salary);

	}
    }
 }
 void  Search_by_id(struct employee a[5]){
    int id,i;
    printf("enter a id:");
    scanf("%d",&id);
       printf("employee\tid\tname\tsalary\n");
     for( i=0;i<5;i++){
	if(id==a[i].id){
     printf("%d\t\t%d\t%s\t%d\n",i,a[i].id,a[i].name,a[i].salary);

	}
    }

 }
 void main()
{
    int a,i;
    struct employee emp[5];
    clrscr();
    //printf("Create a structure employee (id, name, salary). Accept details of n employees and write a menu driven program to perform the following operations. Write separate functions for the different options. i) Search by name ii) Search by id iii) Display al");
    printf("\nente a five employee details");
    for ( i = 0; i < 1; i++)
    {
	printf("\nenter a employee %d detils\n",i);
	printf("enter id:");
	scanf("%d",&emp[i].id);
	printf("enter name:");
	scanf("%s",emp[i].name);
	printf("enter a salary");
	scanf("%d",&emp[i].salary);
    }
 printf("1:search by name");
 printf("\n2:search by id");
 printf("\n3:display all");
 printf("\n===========================\n");
 printf("\nenter your choise");
 scanf("%d",&a);
 switch (a)
 {
 case 1:
 Search_by_name(emp);
    break;
 case 2:
 Search_by_id(emp);
 break;
 case 3:
 display_all(emp);
 break;
 default:
 printf("enter a right option");
    break;
 }
 fflush(stdin);
getch();}
