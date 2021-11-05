#include<stdio.h>


char buf[100];
void init()
{

    mmap(buf,90,7);

}


void read_shell_code()
{
    read(0,buf,90);
}



int main()
{


    setvbuf(stdin,0,2,0);
    setvbuf(stdout,0,2,0);



    init();
    printf("Do you know the ShellCode?\n");
    printf("\n\n\n---------^-^----------\n");



    printf("show me your Migic\n");


    read_shell_code();
    printf("Have you finished?\n");
    // (*buf)();
    char buf[0x8];

    read(0,buf,0x18);

    printf("~Bye\n");
    return 0;


}






