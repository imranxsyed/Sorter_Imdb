#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include "sorting_testing.c"



int main(){

int argc = 3;

FILE* file = fopen("caller.txt","r");

char line[400], file_name[50], sorting_factor[50];

line[0] = '\0'; file_name[0] = '\0'; sorting_factor[0]='\0';

char *token;


	while (fgets(line,400,file)!= "#eof"){


		token = strtok(line, ",");
		strcpy(file_name,token);

		token = strtok(NULL, ",");
		strcpy(sorting_factor,token);

		main_method(argc,file_name,sorting_factor);

		//printf("file_name is : %s\nSort_By: %s\n\n",file_name,sorting_factor);
	
		
		line[0]= '\0';

	}

fclose(file);

return;

}
