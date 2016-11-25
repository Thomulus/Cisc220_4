#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* safestrcat(char *a, char *b){
	int len = strlen(a) + strlen(b);
	char *final = malloc(len+1);
	strcpy(final, a);
	strcat(final, b);
	return final;
}
/*nt main(){
	char *hello = "hello";
	char *gbye = "bye";
	char *result = safestrcat(hello, gbye);
	printf("%s", result);
}*/
