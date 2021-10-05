#include<stdio.h>




int main()
{

	printf("hello world\n");

	while(1)
												{	
	float profits =0;
	float bonus = 0;
	printf("please input the number of profits\n");
	scanf("%f",&profits);

	if(profits>0 && profits<=100000)
	{
		bonus = profits * 0.1;
	}
	else if(profits>100000 &&profits<=200000 )
	{
		bonus = (profits-100000)*0.075+100000*0.1;

	}
	else if(profits>200000 && profits <=400000)
	{
		bonus = (profits-200000)*0.05;
		bonus+=100000*0.1+(200000-100000)*0.075;
	}
	else if(profits>400000 &&profits<=600000)
	{
		bonus = (profits-400000)*0.03;
		bonus+=(400000-200000)*0.05;
		bonus+=(200000-100000)*0.075;
		bonus+= 1000000 * 0.1;
	}
	else if(profits>600000 &&profits<=1000000)
	{
		bonus =(profits-600000)*0.015;
		bonus =(600000-400000)*0.03;
		bonus+=(400000-200000)*0.05;
		bonus+=(200000-100000)*0.075;
		bonus+= 1000000 * 0.1;
	}
	else if(profits>1000000)
	{
		bonus =(profits-1000000)*0.01;
		bonus =(1000000-600000)*0.015;
		bonus =(600000-400000)*0.03;
		bonus+=(400000-200000)*0.05;
		bonus+=(200000-100000)*0.075;
		bonus+= 1000000 * 0.1;
	}
	else
	{
		printf("something wrong\nor you are fired\n");
		
	}
	printf("bonus = %.2f\n",bonus);


										}


return 0;	
}