#include <stdio.h>

int main()
{
    int socre;
    char grade;
    printf("please input the socre:\n");
    scanf("%d", &socre);
    grade=socre>=90?'A':(socre>=60?'B':'C');//多学习三目运算符
    printf("%d belong to %c\n",socre,grade);


    return 0;
}