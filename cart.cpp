#include<stdio.h>
#include<conio.h>

int main() {
   char password[128], c;
   int index = 0;

   printf("Enter Password : ");
   /* 13 is ASCII value of Enter key */
   while((c = getch()) != 13){
       if(index < 0)
           index = 0;
       /* 8 is ASCII value of BACKSPACE character */
       if(c == 8){
           putch('\b');
           putch(NULL);
           putch('\b');
           index--;
       continue;
       }
       password[index++] = c;
       putch('*');
   }
   password[index] = '\0';

   printf("\nPassword String = %s", password);

   return 0;
}
