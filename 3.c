#include <stdio.h>
#include <conio.h>
int swi(int a, int b, int c);
void main()
{
    int temp = 0, a, b, c;
    printf("function with arguments and with return values\n");
    printf("+=1\n-=2\n*=3\n/=4\n%=5\n");
    printf("enter your choice:");
    scanf("%d", &c);
    printf("enter two number:");
    scanf("%d%d", &a, &b);
    printf("%d", temp = swi(a, b, c));
}
int swi(int a,int b,int c)
    {
    int temp = 0;
    switch (c)
    {
    case 1:
        return temp = a + b;

    case 2:
        return temp = a - b;

    case 3:
        return temp = a * b;
    case 4:
        return temp = a / b;
    case 5:
        return temp = a % b;
    }}
