#include<stdio.h>

int main()
{
    int x,y,z,t;
    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
        {t=x;x=y;y=t;}/*交换值*/

    if(x>z)
        {t=x;x=z;z=t;}/*交换值*/

    if(y>z)
        {t=z;z=y;y=t;}/*交换值*/

    printf("small to big : %d->%d->%d\n",x,y,z);

    return 0;
}