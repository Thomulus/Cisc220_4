#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int first = 1;
	int Dim11,Dim12,Dim21,Dim22;
	printf("Insert matrix 1 dimensions separated by a space: ");
	scanf("%d",&Dim11);
	scanf("%d",&Dim12);
	while(1){
	while(1){
		printf("Insert matrix 2 dimensions seperated by a space: ");
		scanf("%d",&Dim21);
		scanf("%d",&Dim22);
		if (Dim11 == 0 || Dim12 == 0 || Dim21 == 0 || Dim22 == 0){
			fprintf(stderr, "Invalid Input");
			return -1;
		}
		if (Dim12 == Dim21){
			break;
		}
		fprintf(stderr, "Dimensions Mismatch");
		printf("\n");
	}
	int Matrix1[10][10];
	if (first){
	printf("Input matrix 1 elements seperated by spaces: ");
	for (int i=0; i< Dim11; i++){
		for (int j=0; j<Dim12; j++){
			scanf("%d", &Matrix1[i][j]);
		}
	}
	}
	int Matrix2[Dim21][Dim22];
	printf("Input matrix 2 elements seperated by spaces: ");
	for (int i=0; i< Dim21; i++){
		for (int j=0; j<Dim22; j++){
			scanf("%d", &Matrix2[i][j]);
		}
	}		
	for (int i=0; i<  Dim21; i++){
		for (int j=0; j<Dim22; j ++){
		}
	}
	printf("\n");
	int Matrix3[Dim11][Dim22];
	printf("Matrix 1:\n");
	for (int i =0; i<Dim11; i++){
		for (int j =0; j<Dim12; j++){
			printf("%6d", Matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Matrix 2:\n");
	for (int i =0; i<Dim21; i++){
		for (int j =0; j<Dim22; j++){
			printf("%6d", Matrix2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int sum;
	printf("Multiplication Result: \n");
	for (int i = 0; i <Dim11; i ++){
		for (int j=0; j <Dim22; j ++){
			sum = 0;
			printf("Element [%d,%d] = ", i+1,j+1);
			for (int k = 0; k< Dim12; k++){
				if (k >0) printf("+ ");
				printf("%d*%d ",Matrix1[i][k],Matrix2[k][j]);
				sum += Matrix1[i][k]*Matrix2[k][j];
			}
			Matrix3[i][j] = sum;
			printf("\n");
		}
	}
	printf("\n");
	printf("Final Output:\n");
	for (int i =0; i< Dim11; i++){
		for (int j =0; j<Dim22; j++){
			printf("%6d", Matrix3[i][j]);
			Matrix1[i][j] =Matrix3[i][j];
		}
		printf("\n");
	}
	first =0;
	Dim12 = Dim22;
	}
	return 0;
}
