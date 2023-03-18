#include<stdio.h>
#include<conio.h>
void main(){
FILE*fp=NULL;
char  cout;
int i=0;
clrscr();
fp=fopen("m.text","r");
if(fp==NULL){

printf("file not exits");
}
while((cout=fgetc(fp))!=EOF){
i++;

}
printf("%d",i);
getch();}
