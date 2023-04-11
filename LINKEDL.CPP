#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
struct ndt
{
int data;
struct ndt *next;
};
typedef struct ndt node;
void display(void);
void create (void);
void insert(void);
node *start;
void main()
{
int choice;
do{
clrscr();
printf("This is a program to implemnet a linked list\n");
printf("Press 1 For Creation\n");
printf("Press 2 for Insert\n");
printf("Press 3 For Display\n");
printf("Press 4 For Exit\n");
scanf ("%d", &choice);
switch(choice)
{
case 1:create(); break;
case 2:insert(); break;
case 3:display(); break;
case 4:exit(0);
}
getch();
}while(1);
}

void display(void)
{
node *temp1;
temp1=start;
printf ("START="); // beautification
while(temp1!=NULL)
{
printf("%d->",temp1->data);
temp1=temp1->next;
} printf("END"); // beautification
}

void create(void)
{
node  *temp;
temp=(node *)malloc(sizeof (node));
if (temp!=NULL)
{
printf("Enter value for data: "); scanf("%d",&temp->data);
start=temp;
temp->next=NULL;
}
else
{
printf("Memory could not be allocated by operating");
}
}
void insert(void)
{
node *temp1, *temp;
temp1=start;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp=(node *)malloc(sizeof (node));
if (temp==NULL)
{
printf ("memory not allocated");
}
else
{
printf ("Enter Data: ");
scanf ("%d",&temp->data);
temp->next=NULL;
temp1->next=temp;
}
}
