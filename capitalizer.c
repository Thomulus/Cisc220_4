#include<stdio.h>
#include <ctype.h>
int main(){
	char filename[30];
	scanf("%s",filename);
	FILE *fp;
	fp = fopen(filename,"r+");
	char check[255];
	int count =0;
	while(1)
	{
		if(feof(fp)){
			break; 
		}

		fgets(check,255,fp);
		count++;
		}
	char file[count][255];
	int row =0;
	rewind(fp);
	while(1)
	{
		if(feof(fp)) { 
			break; 
		}

		fgets(file[row],255,fp);
		row++;
		
	}
	int  wc = 2;
	char ch;
	count --;
	for (int j = 0; j<count; j++){
		wc =2;
	for (int i = 0; i< 255; i ++){
		ch = file[j][i];
		if (ch == '\n') { 
			break;
		}
		if (!isspace(file[j][i])){
			if (wc ==2){
				wc =0;
				if ((file[j][i] < 123 || file[j][i] > 60)){
					if (isalpha(file[j][i] - 32)){
						file[j][i] = file[j][i] -32;
					}
				}
			}
		}
		else{ wc ++;}
	}
	}
	rewind(fp);
	for (int f =0; f <count; f++){
		fprintf(fp, "%s",file[f]);
	}
	fclose(fp);
	return  0;
}
