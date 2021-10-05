#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[30] = "2030300 This is test";
   char *ptr;
   long ret;

   ret = strtoul(str, &ptr, 10);// str是字符串的指针， 剩余部分保存在ptr中，10为进制,后两个参数可默认为0
   printf("数字（无符号长整数）是 %lu\n", ret);
   printf("字符串部分是 |%s|\n", ptr);

   return(0);
}