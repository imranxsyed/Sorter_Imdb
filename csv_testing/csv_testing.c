#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>


int subTokenize(char* ,char*, int);
int subTokenize(char first[],char second[], int index){
    int i=0 ;

    if (first[index] =='"'){

            index++; // getting after "

            while (first[index]!='"'&& first[index]!= '\0'&& first[index]!= '\n'){ //until the next one comes

                second[i]= first[index];
                index++;
                i++;
            }
            second[i]= '\0';

	index = index+2;
        return index;
    }
    else{

        while (first[index]!= ','&& first[index]!= '\0'&& first[index]!= '\n'){

            second[i] = first[index];
            index++;
            i++;

        }
        second[i] = '\0';
	index = index+1;
        return index;
    }
}




int main(){


char token[500],line[1000];
token[0]='\0';
line[0]='\0';
int i=0 ;


FILE* file = fopen("csv_testing.csv", "r");

while (fgets(line,1000,file)){

	printf("the line is: %s\n\n", line);

	i = subTokenize(line,token,i);
	printf("%s\n",token);

	i = subTokenize(line,token,i);
	printf("%s\n",token);

	i = subTokenize(line,token,i);
	printf("%s\n",token);
i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);

i = subTokenize(line,token,i);
	printf("%s\n",token);




}


return 0;


}
