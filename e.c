/*zheng int is divided yinshu*/

#include<stdio.h>

int main()
{

    int n,i;
    printf("\nplease input a number:\n");
    scanf("%d",&n);//输入一个数字
    printf("%d=",n);
    for(i=2;i<=n;i++)
        while(n!=i)
        {
            if(n%i==0)
            {
                printf("%d*",i);
                n=n/i;
            }
            else
                break;

        }
    printf("%d\n",n);


}