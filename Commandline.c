#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i,a;
    float mean;
    printf("total argument is:%d\n",argc);
    printf("file name is:\n%s",argv[0]);
    printf("\n");
    for(i=1;i<argc;i++){
       a= atoi(argv[i]);
       mean+=a;
        // printf("%d",a); to 
        printf("\n");
    }
    mean=mean/2;
    printf(" mean of tow number is :%f",mean);
}
