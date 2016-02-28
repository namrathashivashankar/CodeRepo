#include<stdio.h>
#include<conio.h>

void stringrev(char* str){
int len = strlen(str);
int i = 0;
int a,b,c;
printf("%d",len);
while(i<len/2){
a = str[i];
b = str[len-i-1];
c = a-b;

a-=c;
b+=c;
str[i] =(char)a;
str[len-i-1] = (char)b;
i++;
}
printf("%s",str);
}

void main(){
char str[] = "ganapa%";
clrscr();
stringrev(str);
getch();
}