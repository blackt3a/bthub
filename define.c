#include<stdio.h>
#define MAX 99






int main()
{
	printf("hello world\n");
	printf("MAX is %d\n", MAX); 




#undef MAX
#ifndef MAX
	#define MAX 88
#endif
	printf("MAX is %d\n", MAX); 



#ifdef MAX
	#undef MAX
	#define MAX 77
#endif	




	printf("MAX is %d\n", MAX); 



return 0;
}
