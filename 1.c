#include<stdio.h>

int main()
{
	int q =0;
	int num = 0;
	int ar[4]={1,2,3,4,};
	printf("hello world\n");

	for(int i = 0; i<4;i++)
	{
		for(int j = 0; j<4;j++)
		{
			for(int k = 0; k<4;k++)
			{


				if(ar[i]==ar[j]||ar[i]==ar[k]||ar[j]==ar[k])
				{
					printf(" %d%d%d ",ar[i],ar[j],ar[k]);

					q++;
				}
				else
				{
					printf("[%d%d%d]",ar[i],ar[j],ar[k]);
					q++;
					num++;
				}
				if((q%4)==0)
				{
					printf("\n");
				}

			}	
		}
	}

	printf("一共有%d 个\n",num);

return 0;	
}