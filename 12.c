#include <stdio.h>

int main()
{   

    char c;
    int letters=0,space=0,digit=0,other=0;
    printf("please input some characters: \n");

    while((c=getchar())!='\n') //犯过错，“！=”的优先级比“=”大，注意括号
    {
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            letters++;
        else if(c==' ')
            space++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            other++;
    }

    printf("all in all:char=%d,space=%d,digit=%d\n",letters,space,digit);

    return 0;
}