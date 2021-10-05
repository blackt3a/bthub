#include<stdio.h>

int main()
{
    int a,n,count;
    long int sn=0,tn=0;
    printf("please input \"a\" and \"n\"\n");
    scanf("%d%d",&a,&n);//scanf("%d%d",&)不加“\n”
    while(count<=n)      //，在格式串中定义的非类型控制符，那么相应的在输入时也要输入这个字符
    {
        tn=tn+a;
        sn=sn+tn;
        a=a*10;
        ++count;
    }
    printf("a+aa+....=%ld\n",sn);




    return 0;
}