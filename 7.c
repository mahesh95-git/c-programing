#include<stdio.h>
#include<conio.h>

void main(){
    
     int *a;
   int b[5];
   a=b;
printf("Write a programs based on Pointer\n");
   printf("enter  five element of array:");
   for(int i=0;i<5;i++){
    scanf("%d",a);
    a++;
   }
   a=b;
   printf("give array element are:\n");
   for(int i=0;i<5;i++){
    printf("%d\n",*a);
    a++;
   }
   
}
