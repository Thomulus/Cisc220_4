#include <stdio.h>
#include "mystring.h"
#include "mystring.c"
int main(){
	char *string = "hello";
	char *sir = "sir";
	char *hellosir = safestrcat(string,sir);
	printf("%s\n", hellosir);
	char hell[10];
	substring(string, 0, 4, hell);
	printf("%s\n", hell);
}
