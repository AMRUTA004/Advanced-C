#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
 int chash;
 struct node *next;
};

struct table
{
 struct node *link;
 char name[20];
 int hash;
};


void main()
{
 clrscr();
 table student[5];
 int q;
 for(int i=0;i<5;i++)
 {
  printf("Enter name: \n");
  scanf("%s",&student[i].name);
  q=strlen(student[i].name);
  for(int j=0;j<q;j++)
  {
   if(student[i].name[j]=='a')
   {
    q=q+3;
   }
  }
   student[i].hash=q;
 }
 for(int k=0;k<5;k++)
 {
  printf("The name is: %s \n The hash code generated is: %d\n",student[k].name,student[k].hash);
 }

 getch();

}