#include<stdio.h>
#include<conio.h>
int main()
{
   printf("Press any key to clear the screen.\n");

   getch();

   clrscr();

   printf("This appears after clearing the screen.\n");
   printf("Press any key to exit...\n");

   getch();
   return 0;
}