#include<stdio.h>
int main()
{
    clscr();
    textbackground(2);
    gotoxy(1,5);
    cprintf("Output at row 5 column 1\n");
    textbackground(3);
    gotoxy(20,10);
    cprintf("Output at row 10 column 10\n");
    

}