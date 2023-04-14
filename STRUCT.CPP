#include<stdio.h>
#include<conio.h>
struct newdatatype{
int roll;
char name[20];
};
typedef struct newdatatype student;
void main()
{
clrscr();
student st1;
printf("Enter Roll no:");
scanf("%d",&st1.roll);
printf("Enter Name:");
scanf("%s",&st1.name);
printf("The details of students are:\n");
printf("%d",st1.roll);
printf(" %s",st1.name);
getch();
}