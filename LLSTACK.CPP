#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char ch;
int a[10]={-1},val,s;
int top=-1,i;

do
{
clrscr();
printf("Press P for Push\nPress O for pOp\nPress D for Display\nPress E for exit");
scanf("%c",&ch);
switch(ch)
{
  case'P':
    printf("Input a number");
    scanf("%d",&val);
    top=top+1;
    a[top]=val;
    break;
  case'O':
    top--;
    break;


  case'D':

    for(i=top;i>=0;i--)
    {
    printf("\n%d",a[i]);
    }
    getch();
    break;

  case'E':
    exit(0);

}
}

while(1);

getch();
}
