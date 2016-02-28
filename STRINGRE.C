/* Code to Reverse a given String using the ASCII values of the Characters in the String*/

#include<stdio.h>
#include<conio.h>

void stringrev(char* str){
  int len = strlen(str);
  int i = 0;
  int a,b,c;
  while(i<len/2){
    //Get the ASCII values of the characters
    a = str[i];
    b = str[len-i-1];
    //Swap the values
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
  char str[] = "Namratha";
  clrscr();
  stringrev(str);
  getch();
}
