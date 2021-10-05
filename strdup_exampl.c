#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
char *s="Golden Global View";
char *d;
system("reset");
d=strdup(s);
if(NULL != d) {
printf("%s\n",d);
free(d);
}
getchar();
return 0;
}