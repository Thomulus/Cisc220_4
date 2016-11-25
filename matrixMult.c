#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int Dim11,Dim12,Dim21,Dim22;
	printf("Insert matrix 1 dimensions separated by a space: ");
	scanf("%d",Dim11);
	scanf("%d",Dim12);
	printf("Insert matrix 2 dimensions seperated by a space: ");
	scanf("%d",Dim21);
	scanf("%d",Dim22);
	printf("%d,%d,%d,%d\n", Dim11,Dim12,Dim21,Dim22);
	if (Dim11 == 0 || Dim12 == 0 || Dim21 == 0 || Dim22 == 0){
		printf("derp\n");
	}
	int Matrix1[Dim11][Dim12];
	printf("Input matrix 1 elements seperated by spaces: ");
	for (int i=0; i< Dim11; i++){
		for (int j=0; j<Dim12; j++){
			scanf("%d", &Matrix1[i][j]);
		}
	}
	scanf("%s",Dimensions11);
	for (int i =0; i<Dim11; i++){
		for (int j =0; j<Dim12; j++){
			printf("%d", Matrix1[i][j]);
		}
	}
	printf("\n");
	printf("%s",Dimensions11);
}
