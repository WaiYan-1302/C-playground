#include <stdio.h>
#include <conio.h>
#define password_id  main

int password_id()
{
char password[10], username[10], ch ,will[10], i ,press;


printf("User Name : ");
gets(username);
printf("Password : ");
//Password masking*************
for(i = 0;i < 100;i++)  // It indicates cursor
{
ch = getch();
if(ch == 13)
     break;
password[i] = ch;
ch = '*' ;           // It is the beauty masking the password
printf("%c ", ch);
}
//*****************
password[i] = '\0';
printf("\n\nHello Mr. %s \n " , username);

printf("\n Want to check your password?\n\n *****Press \" F \" to say \"Yes\"****** \n *****Press Any other KEY to say \" No \" *******\n\n\n");


press = getch();
if(press == 8 )(
    printf("The PASSWORD You\'ve entered is => %s \n\n\n" , password));



else
    (printf("You\'ve DENIED to see your password \n \t\t******Have fun!********\n\n\n"));





return 0;
}
