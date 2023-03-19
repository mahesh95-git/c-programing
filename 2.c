#include<stdio.h>
#include<conio.h>
int square(int a){
   int square;
return square=a*a;}
void main(){
     int a,sq;
    printf("functions with arguments and with return values\n");
     printf("program to caclulate square of number\n");
     printf("enter a number:");
     scanf("%d",&a);
    sq=square(a);
     printf(" square of %d is=%d",a,sq);
}
