#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void main()
{
 clrscr();
 FILE *fptr;
 char filename[]="hlw.txt";
 fptr = fopen(filename,"w");
 if(fptr == NULL)
   {
   printf("error in file creation of the file pls check permission of directory");
   }
 else
 fprintf (fptr,"Hello World");

   fclose(fptr);
   printf("File is Created");
   getch();
}