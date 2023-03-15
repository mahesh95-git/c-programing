#include <stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};

void display_all(struct employee a[5]){

for(int i=0;i<5;i++){
    printf("employee %d\n",i);
    printf(" id:%d\n",a[i].id);
    printf(" name:%s\n",a[i].name);
    printf(" salary:%f\n",a[i].salary);
}
}
 
 void Search_by_name( struct employee a[5]){
    char name[50];
    printf("ente a name:");
    scanf("%s",&name);
    for(int i=0;i<5;i++){
        if(strcmp(name,a[i].name)==0){
             printf("employee %d\n",i);
    printf("id:%d\n",a[i].id);
    printf("name:%s\n",a[i].name);
    printf("salary:%f\n",a[i].salary);
        }
    }
 }
 void  Search_by_id(struct employee a[5]){
    int id;
    printf("enter a id:");
    scanf("%d",&id);
     for(int i=0;i<5;i++){
        if(id==a[i].id){
             printf("employee %d\n",i);
    printf("id:%d\n",a[i].id);
    printf("name:%s\n",a[i].name);
    printf("salary:%f\n",a[i].salary);
        }
    }

 }
 void main()
{
    int a;
    struct employee emp[5];
    printf("Create a structure employee (id, name, salary). Accept details of n employees and write a menu driven program to perform the following operations. Write separate functions for the different options. i) Search by name ii) Search by id iii) Display al");
    printf("\nente a five employee details");
    for (int i = 0; i < 5; i++)
    {
        printf("enter a employee %d detils\n",i);
        printf("enter id:");
        scanf("%d",&emp[i].id);
        printf("enter name:");
        scanf("%s",&emp[i].name);
        printf("enter salary:");
        scanf("%f",&emp[i].salary);
    }
 printf("1:search by name");
 printf("\n2:search by id");
 printf("\n3:display all");
 printf("===========================\n");
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
}
