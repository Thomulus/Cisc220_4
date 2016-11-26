#include <stdio.h>
#include <string.h>

int substring(char *source, int from, int n, char *target){
	if ((unsigned)strlen(source)  -1 < from + n){
		return -1;
	}
	if (((unsigned)strlen(source)  -1 < from) | ((unsigned)strlen(source) < n)){
		return -1;
	}
	char *iterator = source;
	for (int i = 0; i < from; i ++) {
		iterator ++;
		//printf("%c",*iterator);
	}
	char result[n];
	for (int i = 0; i < n; i ++) {
		result[i] = *iterator;
		iterator++;
	}
	char *ptr = NULL;
	for (int i = 0; i <n; i++){
		ptr = &result[i];
		*target = *ptr;
		target++;

	}
	return 0;
}

