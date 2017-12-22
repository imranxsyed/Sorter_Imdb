#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>





int main(int argc , char* argv[]){



char line[400];
line[0] = '\0';

int * arr = (int*) malloc(sizeof(int)*1);
int i=0;
int target= 1;

printf("Number of parameter: %d\n", argc);

fgets(line,400,stdin);


while (strlen(line)>1){

	if(i==target){ //need to realloc

		target = target*2;
		arr = realloc(arr, sizeof(int)*(target));
		//printf("new target %d\n", target);

	}

printf("The data: %s\n", line);

arr[i]= atoi(line);
i++;

line[0] = '\0';


fgets(line,400,stdin);
}

printf("number of movies: %d\n", i);

printf("\n\n");

int j=0 ;

while (j<i){

printf("%d\n", arr[j]);
j++;
}

printf("\n%d\n",arr[i]);

return 0;


}




	
