#include "sorter.h"
#include "mergesort.c"


/**

-> Everything Going into the data values and arrays 
-> All uneccearry fields are added 
-> print method is added
-> corrected first[i]= '\0' in the subtokenize method
->added trim function

-> adding parameters and stdin

**/


int compare_movie(Movie movie1,Movie movie2){

	int output;

	if (strcmp(sort_by,"color")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.color[0] == '"' ? movie1.color[1] : movie1.color[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.color[0]=='"'? movie2.color[1] : movie2.color[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);

		//output = strcasecmp(movie2.color,movie1.color);
	
	}

	else if (strcmp(sort_by,"director_name")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.director_name[0] == '"' ? movie1.director_name[1] : movie1.director_name[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.director_name[0]=='"'? movie2.director_name[1] : movie2.director_name[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);

 		//output = strcasecmp(movie2.director_name,movie1.director_name);
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

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.actor_2_name[0] == '"' ? movie1.actor_2_name[1] : movie1.actor_2_name[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.actor_2_name[0]=='"'? movie2.actor_2_name[1] : movie2.actor_2_name[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);


 		//output = strcasecmp(movie2.actor_2_name,movie1.actor_2_name);

	}

	else if (strcmp(sort_by,"actor_1_facebook_likes")==0){

 		output = movie1.actor_1_facebook_likes>= movie2.actor_1_facebook_likes? -1: 1;
	}


	else if (strcmp(sort_by,"gross")==0){

 		output = movie1.gross>= movie2.gross? -1: 1;
	}



	else if (strcmp(sort_by,"genres")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.genres[0] == '"' ? movie1.genres[1] : movie1.genres[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.genres[0]=='"'? movie2.genres[1] : movie2.genres[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);

 		//output = strcasecmp(movie2.genres,movie1.genres);

	}


	else if (strcmp(sort_by,"actor_1_name")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.actor_1_name[0] == '"' ? movie1.actor_1_name[1] : movie1.actor_1_name[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.actor_1_name[0]=='"'? movie2.actor_1_name[1] : movie2.actor_1_name[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);

 		//output = strcasecmp(movie2.actor_1_name,movie1.actor_1_name);

	}

	else if (strcmp(sort_by,"movie_title")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.movie_title[0] == '"' ? movie1.movie_title[1] : movie1.movie_title[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.movie_title[0]=='"'? movie2.movie_title[1] : movie2.movie_title[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);
 		//output = strcasecmp(movie2.movie_title,movie1.movie_title);

	}

	

	else if (strcmp(sort_by,"num_voted_users")==0){

 		output = movie1.num_voted_users >= movie2.num_voted_users ? -1: 1;
	}



	else if (strcmp(sort_by,"cast_total_facebook_likes")==0){

 		output = movie1.cast_total_facebook_likes >= movie2.cast_total_facebook_likes ? -1: 1;
	}



	else if (strcmp(sort_by,"actor_3_name")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.actor_3_name[0] == '"' ? movie1.actor_3_name[1] : movie1.actor_3_name[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.actor_3_name[0]=='"'? movie2.actor_3_name[1] : movie2.actor_3_name[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);

 		//output = strcasecmp(movie2.actor_3_name,movie1.actor_3_name);

	}

	
	else if (strcmp(sort_by,"facenumber_in_poster")==0){

 		output = movie1.facenumber_in_poster >= movie2.facenumber_in_poster ? -1: 1;
	}




	else if (strcmp(sort_by,"plot_keywords")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.plot_keywords[0] == '"' ? movie1.plot_keywords[1] : movie1.plot_keywords[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.plot_keywords[0]=='"'? movie2.plot_keywords[1] : movie2.plot_keywords[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);

 		//output = strcasecmp(movie2.plot_keywords,movie1.plot_keywords);

	}

	else if (strcmp(sort_by,"movie_imdb_link")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.movie_imdb_link[0] == '"' ? movie1.movie_imdb_link[1] : movie1.movie_imdb_link[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.movie_imdb_link[0]=='"'? movie2.movie_imdb_link[1] : movie2.movie_imdb_link[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);


 		//output = strcasecmp(movie2.movie_imdb_link,movie1.movie_imdb_link);

	}


	
	else if (strcmp(sort_by,"num_user_for_reviews")==0){

		

 		output = movie1.num_user_for_reviews >= movie2.num_user_for_reviews ? -1: 1;
	}



	else if (strcmp(sort_by,"language")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.language[0] == '"' ? movie1.language[1] : movie1.language[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.language[0]=='"'? movie2.language[1] : movie2.language[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);


 		//output = strcasecmp(movie2.language,movie1.language);

	}


	else if (strcmp(sort_by,"country")==0){
		
		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.country[0] == '"' ? movie1.country[1] : movie1.country[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.country[0]=='"'? movie2.country[1] : movie2.country[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);


 		//output = strcasecmp(movie2.country,movie1.country);

	}

	else if (strcmp(sort_by,"content_rating")==0){

		/** Quotation marks checking**/
		
		//for movies 1
		char first[2];
		first[0] = movie1.content_rating[0] == '"' ? movie1.content_rating[1] : movie1.content_rating[0];
		first[1] = '\0';

		//for movie 2
		char second[2];
		second[0] = movie2.content_rating[0]=='"'? movie2.content_rating[1] : movie2.content_rating[0];
		second[1] = '\0';
		

		output = strcasecmp(second,first);

 		//output = strcasecmp(movie2.content_rating,movie1.content_rating);

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


	return output;
	


}




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




void printMovies(Movie  movies[], int total_movies, char command[]){

	//FILE* outputName = fopen("output.csv", command);
	//printf("command is: %s\n",command);
	
	if (strcmp(command,"w")==0){
	//fprintf(outputName, "%s",header);
	printf("%s",header);
	}
	

	int i= 0 ;
	Movie movie;

	for (i=0 ; i< total_movies ; i++){

	movie = movies[i]; // getting the movie at index i
	//printContent(movie); // printing the content of the movie at index i
	//printf("line number: %d\n", i);


	/*fprintf(outputName,"%s,%s,%d,%d,%d,%d,%s,%d,%d,%s,%s,%s,%d,%d,%s,%d,%s,%s,%d,%s,%s,%s,%d,%d,%d,%f,%f,%d\n" , movie.color, movie.director_name,movie.num_critic_for_reviews,movie.duration,movie.director_facebook_likes,
movie.actor_3_facebook_likes,movie.actor_2_name,movie.actor_1_facebook_likes,movie.gross,movie.genres,
movie.actor_1_name,movie.movie_title,movie.num_voted_users,movie.cast_total_facebook_likes,movie.actor_3_name,movie.facenumber_in_poster,
movie.plot_keywords,movie.movie_imdb_link,movie.num_user_for_reviews,movie.language,movie.country,movie.content_rating,movie.budget,
movie.title_year,
movie.actor_2_facebook_likes,movie.imdb_score,movie.aspect_ratio,movie.movie_facebook_likes);*/


	printf("%s,%s,%d,%d,%d,%d,%s,%d,%d,%s,%s,%s,%d,%d,%s,%d,%s,%s,%d,%s,%s,%s,%d,%d,%d,%f,%f,%d\n" , movie.color, movie.director_name,movie.num_critic_for_reviews,movie.duration,movie.director_facebook_likes,
movie.actor_3_facebook_likes,movie.actor_2_name,movie.actor_1_facebook_likes,movie.gross,movie.genres,
movie.actor_1_name,movie.movie_title,movie.num_voted_users,movie.cast_total_facebook_likes,movie.actor_3_name,movie.facenumber_in_poster,
movie.plot_keywords,movie.movie_imdb_link,movie.num_user_for_reviews,movie.language,movie.country,movie.content_rating,movie.budget,
movie.title_year,
movie.actor_2_facebook_likes,movie.imdb_score,movie.aspect_ratio,movie.movie_facebook_likes);

	

	}

//fclose(outputName);


}






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

	else if (strcmp(sort_by,"movie_title")==0 ){

 		if (strlen(movie.movie_title)<1 ){


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

return null_values;

}






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

 		if ((strlen(movie.movie_title)>=1)){

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
















int main(int argc, char* argv[]){


    if (argc < 3){

		printf("Invalid number of Parameters\n");
		exit(0);

	}

     Movie data;
  
     char append[2] = "a";
     char write[2] = "w";
     char token[500]; token[0]= '\0';
     char line[1000]; line[0]= '\0'; 

    
     header[0] = '\0';
     sort_by[0] = '\0';


     strcpy(sort_by, argv[2]);


      int total_num_of_movies=0,track_tokenizer=0, null_values=0, non_null_values=0,target=500;


    
      Movie* mvs= (Movie*) malloc(sizeof(Movie)*target);

   
	
	fgets(header,1000,stdin);//getting the header

	fgets(line,1000,stdin); //getting the first line




        while (strlen(line)>1){


	
	if(total_num_of_movies==target){ //need to realloc

		target = target*2;
		mvs = realloc(mvs, sizeof(Movie)*(target));
		//printf("new target %d\n", target);

	}


            //value of color, putting the value of color into the data
         track_tokenizer = subTokenize(line, token,track_tokenizer);
        data.color[0] = '\0';
	trim(token);
        strcpy(data.color, token);

        
              track_tokenizer = subTokenize(line, token,track_tokenizer);
        data.director_name[0] = '\0';
	trim(token);
        strcpy(data.director_name,token);

             // printf("%s\n", token);




            //num_critcs_for_reviews
            track_tokenizer = subTokenize(line, token,track_tokenizer);
	    trim(token);
            data.num_critic_for_reviews = atoi(token);
             //printf("%d\n", atoi(token));

            //duration
         track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
         data.duration = atoi(token);
         // printf("%d\n", atoi(token));

          //director_facebook_likes
        track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
        data.director_facebook_likes = atoi(token);

        // actor_3_facebook_liked
          track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
          data.actor_3_facebook_likes = atoi(token);
          //printf("%d\n", atoi(token));

        //actor_to_name
         track_tokenizer = subTokenize(line, token,track_tokenizer);
         data.actor_2_name[0] = '\0';
	trim(token);
         strcpy(data.actor_2_name, token);
        // printf("%s\n", token);


            //actor_1_facebook_likes
           track_tokenizer = subTokenize(line, token,track_tokenizer);
		trim(token);
           data.actor_1_facebook_likes = atoi(token);
          // printf("%d\n", atoi(token));

           //gross
           track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
           data.gross = atoi(token);
          // printf("%d\n", atoi(token));


        //genres
        track_tokenizer = subTokenize(line, token,track_tokenizer);
        data.genres[0]= '\0';
	trim(token);
        strcpy(data.genres, token);
        // printf("%s\n", token);



          //actor_1_name
          track_tokenizer = subTokenize(line, token,track_tokenizer);
          data.actor_1_name[0] = '\0';
	trim(token);
          strcpy(data.actor_1_name, token);
         // printf("%s\n", token);


        //movie_title
        track_tokenizer = subTokenize(line, token,track_tokenizer);
        data.movie_title[0]= '\0';
	trim(token);
        strcpy(data.movie_title, token);
        //printf("%s\n", data.movie_title);


         //num_voted_users
        track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
        data.num_voted_users = atoi(token);

        //cast_total_Facebook_likes
       track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
       data.cast_total_facebook_likes = atoi(token);

           //actor_3_name
            track_tokenizer = subTokenize(line, token,track_tokenizer);
            data.actor_3_name[0]= '\0';
	trim(token);
            strcpy(data.actor_3_name, token);
           // printf("%s\n", token);


          //facenumber_in_poster
          track_tokenizer = subTokenize(line, token,track_tokenizer);
          data.facenumber_in_poster = atoi(token);
	trim(token);
          // printf("%d\n", atoi(token));

         // plot keywords
          track_tokenizer = subTokenize(line, token,track_tokenizer);
          data.plot_keywords[0] = '\0';
	trim(token);
          strcpy(data.plot_keywords, token);
         // printf("%s\n", token);


         // movie_imdb_link
          track_tokenizer = subTokenize(line, token,track_tokenizer);
          data.movie_imdb_link[0] = '\0';
	trim(token);
          strcpy(data.movie_imdb_link, token);
         // printf("%s\n", token);


         // num_user_for_reviews
          track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
          data.num_user_for_reviews = atoi(token);
          //printf("%d\n", atoi(token));

         // language
          track_tokenizer = subTokenize(line, token,track_tokenizer);
          data.language[0]= '\0';
	trim(token);
           strcpy(data.language, token);
          //printf("%s\n", token);


         // country
          track_tokenizer = subTokenize(line, token,track_tokenizer);
          data.country[0] = '\0';
	trim(token);
          strcpy(data.country, token);
          //printf("%s\n", token);


         // content_rating
         track_tokenizer = subTokenize(line, token,track_tokenizer);
         data.content_rating[0] = '\0';
	trim(token);
         strcpy(data.content_rating, token);
         // printf("%s\n", token);


            //budget
           track_tokenizer = subTokenize(line, token,track_tokenizer);
		trim(token);
           data.budget = atoi(token);
	
          // printf("%d\n", atoi(token));

           //title_year
           track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
           data.title_year =atoi( token);
          // printf("%d\n", atoi(token));

           // actor_2_facebook_likes
            track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
            data.actor_2_facebook_likes = atoi(token);
           // printf("%d\n", atoi(token));

            //imdb_score
            track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
            data.imdb_score = atof(token);
            // printf("%d\n", atoi(token));

             //aspect_ratio
            track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
            data.aspect_ratio = atof(token);
            // printf("%d\n", atoi(token));

            //movie facebook _like
            track_tokenizer = subTokenize(line, token,track_tokenizer);
	trim(token);
            data.movie_facebook_likes = atoi(token);
            // printf("%d\n", atoi(token));


            track_tokenizer= 0;
            line[0]= '\0';


            mvs[total_num_of_movies] = data;
            total_num_of_movies++;

	  // printf("the line number: %d\n", movie_number);

	fgets(line,1000,stdin);

		

            


}    //loop ends

/*printf("number of movies: %d\n", total_num_of_movies);
return 0 ;*/

//reallocating to the numbers of movies
mvs = realloc(mvs, sizeof(Movie)*(total_num_of_movies));


Movie* invalid_movies;
invalid_movies = (Movie*)malloc(sizeof(Movie)*total_num_of_movies);
null_values = invalid_values(mvs, invalid_movies, null_values , total_num_of_movies);

//printf("invalid_values: %d\n",null_values);
/**no need to valid and invalid arrays**/
if (null_values <=0){



free(invalid_movies);


mergeSort(mvs,total_num_of_movies);
printMovies(mvs,total_num_of_movies, write);

//printf("no invalid values are found: %s\n", write);


return 0;
}

/**saperate the array**/

//putting the null values first
printMovies(invalid_movies,null_values, write);

//getting the non null values 
non_null_values = (total_num_of_movies) - (null_values);



valid_values(mvs, invalid_movies,total_num_of_movies);

mergeSort(invalid_movies, non_null_values);

printMovies(invalid_movies, non_null_values,append);



  return 0;
 }



