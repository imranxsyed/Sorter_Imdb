#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

/** Structure For Each Row **/
typedef struct movies Movie;
struct movies {

    char color[100];
    char director_name[50];
    int num_critic_for_reviews;
    int duration;
    int director_facebook_likes;
    int actor_3_facebook_likes;
    char actor_2_name[50];
    int actor_1_facebook_likes;
    int gross;
    char genres[100];
    char actor_1_name[50];
    char movie_title[100];
    int num_voted_users;
    int cast_total_facebook_likes;
    char actor_3_name[50];
    int facenumber_in_poster;
    char plot_keywords [500];
    char movie_imdb_link [100];
    int num_user_for_reviews;
    char language [50];
    char country[50];
    char content_rating[50];
    int budget;
    int title_year;
    int actor_2_facebook_likes;
    double imdb_score;
    double aspect_ratio;
    int movie_facebook_likes;


};




/**Global Variable**/

//headers for the file
char header[500];
char sort_by[100];


int compare_movie(Movie, Movie);
int compare_movie(Movie movie1,Movie movie2){

	int output;

	if (strcmp(sort_by,"color")==0){

		output = strcasecmp(movie2.color,movie1.color);
	
	}

	else if (strcmp(sort_by,"director_name")==0){

 		output = strcasecmp(movie2.director_name,movie1.director_name);
	}


	else if (strcmp(sort_by,"num_critic_for_reviews")==0){

 		output = movie1.num_critic_for_reviews >= movie2.num_critic_for_reviews? -1: 1;
	}
	

	else if (strcmp(sort_by,"duration")==0){

 		output = movie1.duration >= movie2.duration? -1: 1;
	}



	else if (strcmp(sort_by,"director_facebook_likes")==0){

 		output = movie1.director_facebook_likes >= movie2.director_facebook_likes? -1: 1;
	}


	else if (strcmp(sort_by,"actor_3_facebook_likes")==0){

 		output = movie1.actor_3_facebook_likes >= movie2.actor_3_facebook_likes? -1: 1;
	}


	else if (strcmp(sort_by,"actor_2_name")==0){

 		output = strcasecmp(movie2.actor_2_name,movie1.actor_2_name);

	}

	else if (strcmp(sort_by,"actor_1_facebook_likes")==0){

 		output = movie1.actor_1_facebook_likes>= movie2.actor_1_facebook_likes? -1: 1;
	}


	else if (strcmp(sort_by,"gross")==0){

 		output = movie1.gross>= movie2.gross? -1: 1;
	}



	else if (strcmp(sort_by,"genres")==0){

 		output = strcasecmp(movie2.genres,movie1.genres);

	}


	else if (strcmp(sort_by,"actor_1_name")==0){

 		output = strcasecmp(movie2.actor_1_name,movie1.actor_1_name);

	}

	else if (strcmp(sort_by,"movie_title")==0){

 		output = strcasecmp(movie2.movie_title,movie1.movie_title);

	}

	

	else if (strcmp(sort_by,"num_voted_users")==0){

 		output = movie1.num_voted_users >= movie2.num_voted_users ? -1: 1;
	}



	else if (strcmp(sort_by,"cast_total_facebook_likes")==0){

 		output = movie1.cast_total_facebook_likes >= movie2.cast_total_facebook_likes ? -1: 1;
	}



	else if (strcmp(sort_by,"actor_3_name")==0){

 		output = strcasecmp(movie2.actor_3_name,movie1.actor_3_name);

	}

	
	else if (strcmp(sort_by,"facenumber_in_poster")==0){

 		output = movie1.facenumber_in_poster >= movie2.facenumber_in_poster ? -1: 1;
	}




	else if (strcmp(sort_by,"plot_keywords")==0){

 		output = strcasecmp(movie2.plot_keywords,movie1.plot_keywords);

	}

	else if (strcmp(sort_by,"movie_imdb_link")==0){

 		output = strcasecmp(movie2.movie_imdb_link,movie1.movie_imdb_link);

	}


	
	else if (strcmp(sort_by,"num_user_for_reviews")==0){

 		output = movie1.num_user_for_reviews >= movie2.num_user_for_reviews ? -1: 1;
	}



	else if (strcmp(sort_by,"language")==0){

 		output = strcasecmp(movie2.language,movie1.language);

	}


	else if (strcmp(sort_by,"country")==0){

 		output = strcasecmp(movie2.country,movie1.country);

	}

	else if (strcmp(sort_by,"content_rating")==0){

 		output = strcasecmp(movie2.content_rating,movie1.content_rating);

	}

	else if (strcmp(sort_by,"budget")==0){

 		output = movie1.budget >= movie2.budget ? -1: 1;
	}
	

	else if (strcmp(sort_by,"title_year")==0){

 		output = movie1.title_year >= movie2.title_year ? -1: 1;
	}
	

	else if (strcmp(sort_by,"actor_2_facebook_likes")==0){

 		output = movie1.actor_2_facebook_likes >= movie2.actor_2_facebook_likes ? -1: 1;
	}
	

	else if (strcmp(sort_by,"imdb_score")==0){

 		output = movie1.imdb_score >= movie2.imdb_score ? -1: 1;
	}
	

	else if (strcmp(sort_by,"aspect_ratio")==0){

 		output = movie1.aspect_ratio >= movie2.aspect_ratio ? -1: 1;
	}


	else if (strcmp(sort_by,"movie_facebook_likes")==0){

 		output = movie1.movie_facebook_likes >= movie2.movie_facebook_likes ? -1: 1;
	}

	else{


	printf("Wrong Parameter\n");
	exit(0);

	}
	




}





/** Tokenizer Function **/
int subTokenize(char* ,char*, int);
int subTokenize(char first[],char second[], int index){
    int i=0 ;

    if (first[index] =='"'){

		
	    second[i] = '"'; //putting " for the first character
	    i++;
            index++; // getting after "

            while (first[index]!='"'&& first[index]!= '\0'&& first[index]!= '\n'){ //until the next one comes

                second[i]= first[index];
                index++;
                i++;
            }
            second[i]= '"'; // putting " in the last character
	     second[i+1] = '\0';

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






/** Function to Print The values in Command LIne **/
void printContent(Movie);
void printContent( Movie movie){


printf("%s,%s,%d,%d,%d,%d,%s,%d,%d,%s,%s,%s,%d,%d,%s,%d,%s,%s,%d,%s,%s,%s,%d,%d,%d,%f,%f,%d\n" , movie.color, movie.director_name,movie.num_critic_for_reviews,movie.duration,movie.director_facebook_likes,
movie.actor_3_facebook_likes,movie.actor_2_name,movie.actor_1_facebook_likes,movie.gross,movie.genres,
movie.actor_1_name,movie.movie_title,movie.num_voted_users,movie.cast_total_facebook_likes,movie.actor_3_name,movie.facenumber_in_poster,
movie.plot_keywords,movie.movie_imdb_link,movie.num_user_for_reviews,movie.language,movie.country,movie.content_rating,movie.budget,
movie.title_year,
movie.actor_2_facebook_likes,movie.imdb_score,movie.aspect_ratio,movie.movie_facebook_likes);



}




/** Function to output the file **/
void printMovies( Movie[], int);
void printMovies(Movie  movies[], int total_movies){

	FILE* outputName = fopen("output.csv", "w");
	
	fprintf(outputName, "%s",header);

	int i= 0 ;
	Movie movie;

	for (i=0 ; i< total_movies ; i++){

	movie = movies[i]; // getting the movie at index i
	//printContent(movie); // printing the content of the movie at index i
	//printf("line number: %d\n", i);


	fprintf(outputName,"%s,%s,%d,%d,%d,%d,%s,%d,%d,%s,%s,%s,%d,%d,%s,%d,%s,%s,%d,%s,%s,%s,%d,%d,%d,%f,%f,%d\n" , movie.color, movie.director_name,movie.num_critic_for_reviews,movie.duration,movie.director_facebook_likes,
movie.actor_3_facebook_likes,movie.actor_2_name,movie.actor_1_facebook_likes,movie.gross,movie.genres,
movie.actor_1_name,movie.movie_title,movie.num_voted_users,movie.cast_total_facebook_likes,movie.actor_3_name,movie.facenumber_in_poster,
movie.plot_keywords,movie.movie_imdb_link,movie.num_user_for_reviews,movie.language,movie.country,movie.content_rating,movie.budget,
movie.title_year,
movie.actor_2_facebook_likes,movie.imdb_score,movie.aspect_ratio,movie.movie_facebook_likes);

	

	}

fclose(outputName);


}


/** function to figure out the Null valued**/


int invalid_values(Movie[],Movie[], int,int);
int invalid_values(Movie  movies[], Movie  invalid_movies[],int null_values, int total_movies){

int i = 0;
Movie movie;




for (i=0 ; i< total_movies; i++){

movie = movies[i];




	if (strcmp(sort_by,"color")==0){

		if (strlen(movie.color)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"director_name")==0){

 		if (strlen(movie.director_name)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}
	}


	else if (strcmp(sort_by,"num_critic_for_reviews")==0){}
	else if (strcmp(sort_by,"duration")==0){}
	else if (strcmp(sort_by,"director_facebook_likes")==0){}
	else if (strcmp(sort_by,"actor_3_facebook_likes")==0){}
	else if (strcmp(sort_by,"actor_1_facebook_likes")==0){}
	else if (strcmp(sort_by,"gross")==0){}
	else if (strcmp(sort_by,"num_voted_users")==0){}
	else if (strcmp(sort_by,"cast_total_facebook_likes")==0){}
	else if (strcmp(sort_by,"facenumber_in_poster")==0){}
	else if (strcmp(sort_by,"num_user_for_reviews")==0){}
	else if (strcmp(sort_by,"budget")==0){}
	else if (strcmp(sort_by,"title_year")==0){}
	else if (strcmp(sort_by,"actor_2_facebook_likes")==0){}
	else if (strcmp(sort_by,"imdb_score")==0){}
	else if (strcmp(sort_by,"aspect_ratio")==0){}
	else if (strcmp(sort_by,"movie_facebook_likes")==0){}


	


	else if (strcmp(sort_by,"actor_2_name")==0){

 		if (strlen(movie.actor_2_name)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	



	else if (strcmp(sort_by,"genres")==0){

 		if (strlen(movie.genres)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}


	else if (strcmp(sort_by,"actor_1_name")==0){

 		if (strlen(movie.actor_1_name)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"movie_title")==0){

 		if (strlen(movie.movie_title)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	



	else if (strcmp(sort_by,"actor_3_name")==0){

 		if (strlen(movie.actor_3_name)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	




	else if (strcmp(sort_by,"plot_keywords")==0){

 		if (strlen(movie.plot_keywords)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"movie_imdb_link")==0){

 		if (strlen(movie.movie_imdb_link)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}
	
	

	else if (strcmp(sort_by,"language")==0){

 		if (strlen(movie.language)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}


	else if (strcmp(sort_by,"country")==0){

 		if (strlen(movie.country)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"content_rating")==0){

 		if (strlen(movie.content_rating)<1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else{


	printf("Wrong Parameter\n");
	exit(0);

	}
	





   



}

return null_values;;

}




/** function to put all the valid movies into the array called valid_movies**/
void valid_values(Movie[],Movie[],int);
void valid_values(Movie  movies[], Movie  invalid_movies[], int total_movies){

int i = 0, null_values=0;
Movie movie;




for (i=0 ; i< total_movies; i++){

movie = movies[i];




	if (strcmp(sort_by,"color")==0){

		if (strlen(movie.color)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"director_name")==0){

 		if (strlen(movie.director_name)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}
	}

	else if (strcmp(sort_by,"num_critic_for_reviews")==0){}
	else if (strcmp(sort_by,"duration")==0){}
	else if (strcmp(sort_by,"director_facebook_likes")==0){}
	else if (strcmp(sort_by,"actor_3_facebook_likes")==0){}
	else if (strcmp(sort_by,"actor_1_facebook_likes")==0){}
	else if (strcmp(sort_by,"gross")==0){}
	else if (strcmp(sort_by,"num_voted_users")==0){}
	else if (strcmp(sort_by,"cast_total_facebook_likes")==0){}
	else if (strcmp(sort_by,"facenumber_in_poster")==0){}
	else if (strcmp(sort_by,"num_user_for_reviews")==0){}
	else if (strcmp(sort_by,"budget")==0){}
	else if (strcmp(sort_by,"title_year")==0){}
	else if (strcmp(sort_by,"actor_2_facebook_likes")==0){}
	else if (strcmp(sort_by,"imdb_score")==0){}
	else if (strcmp(sort_by,"aspect_ratio")==0){}
	else if (strcmp(sort_by,"movie_facebook_likes")==0){}


	else if (strcmp(sort_by,"num_critic_for_reviews")==0){

	}
	//
	//
	//


	else if (strcmp(sort_by,"actor_2_name")==0){

 		if (strlen(movie.actor_2_name)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	//
	//



	else if (strcmp(sort_by,"genres")==0){

 		if (strlen(movie.genres)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}


	else if (strcmp(sort_by,"actor_1_name")==0){

 		if (strlen(movie.actor_1_name)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"movie_title")==0){

 		if (strlen(movie.movie_title)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	//
	//



	else if (strcmp(sort_by,"actor_3_name")==0){

 		if (strlen(movie.actor_3_name)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	//



	else if (strcmp(sort_by,"plot_keywords")==0){

 		if (strlen(movie.plot_keywords)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"movie_imdb_link")==0){

 		if (strlen(movie.movie_imdb_link)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}
	
	//

	else if (strcmp(sort_by,"language")==0){

 		if (strlen(movie.language)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}


	else if (strcmp(sort_by,"country")==0){

 		if (strlen(movie.country)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	else if (strcmp(sort_by,"content_rating")==0){

 		if (strlen(movie.content_rating)>=1){

			invalid_movies[null_values]  = movie;
			null_values++;
			
		}

	}

	//
	//
	//
	//
	//
	//

	else{


	printf("Wrong Parameter\n");
	exit(0);

	}
	

	}

return;

}


/** TRIM Function  **/

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





//Suggestion: define a struct that mirrors a record (row) of the data set



void sort(Movie[], Movie[],Movie[], int);
void sort(Movie first[], Movie second[],Movie output[], int size) {



int i, j, n = 0;
j = 0;
i = 0;
while (i < (size/2) && j < (size-(size/2))) {

if (compare_movie(first[i], second[j])>=0) {
output[n] = first[i];
n++;
i++;

} else {

output[n] = second[j];
j++;
n++;

}
if (i > (size/2) - 1 || j > ((size - (size/2)) - 1)) {

if (j > ((size - (size/2)) - 1)) {

while (i < (size/2)) {

output[n] = first[i];
n++;
i++;
}
} else {

while (j < (size-(size/2))) {

output[n] = second[j];
n++;
j++;
}

}
}
}




return;

}


void copy(Movie[],Movie[],int ,int );
void copy(Movie input[],Movie output[], int start, int end) {



if (start == end) {
output[0] = input[end - 1];
return ;
}

int i = 0;




while (start < end) {

output[i] = input[start];
start++;
i++;
}
return;
}







void mergeSort(Movie[], int);
void mergeSort(Movie input[],int size ) {




if (size <= 1) {


return ;
}



int start=0, mid= (size/2),end = size -(size/2);



/**sending left sub**/
Movie* left;
left = (Movie*) malloc(sizeof(Movie)*mid);
copy(input,left, start, mid);


        /**sending right sub**/
Movie *right;
right = (Movie*) malloc(sizeof(Movie)*end);
copy(input , right, mid , size);


 mergeSort(left,mid);
          mergeSort(right,end);





sort(left, right,input, size);
free(left);
free(right);



return;



}

