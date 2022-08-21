#include <stdio.h>
#include <string.h>
int main(){
	char str1[3],str2[8];
	puts("enter the string1");
	gets(str1);
	puts("enter the sring2");
	gets(str2);
	if(strcmp(str1,str2)==0)
	       puts("both are equal");
	else
	    puts("both are not equal");
}
