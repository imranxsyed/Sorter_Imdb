#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

/**
 this program tests the verifies the equality of the data betweem given file and your_program_generated_file

-->uses trim function for given file

**/


char* trim (char*);
char* trim (char* input){


    //checking if the input is Null or contains nothing
    //return: Null
    if (input == NULL || strlen(input)<1){

        return input;
    }

    //variable i starts with the last letter of the word and proceeds backwards until hit an actual letter
    int i, j=0;
    i= strlen(input) -1;

    //executes until it hits a valid letter
    while ((input[i]== ' '|| input[i]== '\n')&& i>=0){

        i--;
    }
    // no spaces found
    //return : input
    if (i == strlen(input)-1){
//input[strlen(input)+1] = '\0';
        return input;
    }
    input[i+1] = '\0';
    /** got rid of all the trailing zero at this time**/



     /** starting from the start of string and removing all the leading zero**/
     while (input[j]== ' ' ){


        j++;
     }

     if (!(j>0)){

        return input;
     }

     int index=0;

     while (j<=i){

        input[index] = input[j];
        j++;
        index++;
     }
     input[index] = '\0';


    return input;



}




int subTokenize(char* ,char*, int);
int subTokenize(char first[],char second[], int index){
    int i=0 ;

    if (first[index] =='"'){

            index++; // getting after "

            while (first[index]!='"'){ //until the next one comes

                second[i]= first[index];
                index++;
                i++;
            }
            first[i]= '\0';

        return index+2;
    }
    else{

        while (first[index]!= ','&& first[index]!= '\0'&& first[index]!= '\n'){

            second[i] = first[index];
            index++;
            i++;

        }
        second[i] = '\0';
        return index+1;
    }
}




int main(){

int track_tokenizer1=0;
int track_tokenizer2=0;

char token1[500],token2[500];
token1[0]='\0';
token2[0]= '\0';

 FILE* given = fopen("movie_metadata.csv", "r");
 FILE* output = fopen("output.csv", "r");



char given_line[500], output_line[500];
given_line[0]= '\0';
output_line[0]= '\0';
int i=0;



while (fgets(given_line,500,given)){


	fgets(output_line,500,output);



	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}

	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}

	/*track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(token1,token2)!=0 && i>0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}*/


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}

	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}

	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	if (strcmp(trim(token1),token2)!=0){

		printf("Two files do not have the same data: %d\n", i);
		printf("token1: %s\ntoken2: %s\n", token1,token2);
		return 0;
	}

	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);


	track_tokenizer1 = subTokenize(given_line, token1,track_tokenizer1);
	track_tokenizer2 = subTokenize(output_line, token2,track_tokenizer2);

	
	





	
	i++;
	given_line[0] = '\0';
	output_line[0]= '\0';
	track_tokenizer1= 0 ;
	track_tokenizer2=0;

	

}

	printf("Data in both files is the same\n");
	return 0;

	fclose(given);
	fclose(output);

}
