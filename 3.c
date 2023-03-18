#include<stdio.h>
#include<conio.h>
int sumarray(int a[]){
	   int sum=0;
	   for(i=0;i<size;i++){
	   sum+=a[i];
	   }

return sum;}
void main(){

int a,array[50],sum=0;
printf("program to calculate array element sum\n");
printf("enter size of array:");
 scanf("%d",&a); 
printf("enter a %d array element:");
for(int i=0;i<a;i++){
scanf("%d",&array[i]);
}
sum=sumarray(array);
printf("sum of array element is%d",sum);
}
