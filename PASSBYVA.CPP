#include<stdio.h>
#include<conio.h>
void increment(int x)
{
  x++;
}
  void main()
  {
  clrscr();
    int num=10;
    increment(num);
    printf("num=%d",num);
    getch();
  }