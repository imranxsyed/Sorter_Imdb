#include "Sorter.h"


/**

-> Everything Going into the data values and arrays 
-> All uneccearry fields are added 
-> print method is added
-> corrected first[i]= '\0' in the subtokenize method
->added trim function

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





int main(){

  /*  char color[50];
    char director_name[50];
    int num_critic_for_reviews;
    int duration;
    int director_facebook_likes;
    int actor_3_facebook_likes;
    char actor_2_name[50];
    int actor_1_facebook_likes;
    int gross;
    char genres[150];
    char actor_1_name[50];
    char movie_title[500];
    int num_voted_users;
    int cast_total_facebook_likes;
    char actor_3_name[50];
    int facenumber_in_poster;
    char plot_keywords [500];
    char movie_imdb_link [500];
    int num_user_for_reviews;
    char language [100];
    char country[100];
    char content_rating[500];
    int budget;
    int title_year;
    int actor_2_facebook_likes;
    float imdb_score;
    float aspect_ratio;
    int movie_facebook_likes;

  color[0] = '\0';
  director_name[0] = '\0';
  actor_2_name[0] = '\0';
  genres[0] = '\0';
  actor_1_name[0] = '\0';
  movie_title[0] = '\0';
  actor_3_name[0] = '\0';
  plot_keywords[0] = '\0';
  movie_imdb_link[0] = '\0';
  language[0] = '\0';
  country[0] = '\0';
  content_rating[0] = '\0';*/


     char token[500];
     token[0]= '\0';

    char line[500];
     line[0]= '\0'; 

     header[0] = '\0';


      int total_num_of_movies=0, movie_number=0,track_tokenizer=0, null_values, non_null_values=0;


     Movie data;


      FILE* fileName = fopen("movie_metadata.csv", "r"); // getting the pointer to the the file
      

    while (fgets(line,500,fileName)){

        total_num_of_movies++;
    }//we got the total number of lines. i.e. Total num of movies


    fclose(fileName);

    
    //making an array of the total num of movies
    total_num_of_movies -= 1; //taking out the heading
    Movie mvs[total_num_of_movies];

    /*printf("Total num of movies: %d\n", total_num_of_movies);
    printf("Array Size: %d\n", (sizeof(movies)/ sizeof(Movie)));*/



        fileName = fopen("movie_metadata.csv", "r");
        line[0] = '\0';
	
	fgets(header,500,fileName);//getting the header

        while (fgets(line,500,fileName)){

            //value of color, putting the value of color into the data
         track_tokenizer = subTokenize(line, token,track_tokenizer);
        data.color[0] = '\0';
	trim(token);
        strcpy(data.color, token);

        // printf("%s\n", token);






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


            mvs[movie_number] = data;
            movie_number++;

	  // printf("the line number: %d\n", movie_number);

		

            


}    //loop ends



Movie* valid_movies = (Movie*)malloc(sizeof(Movie)*total_num_of_movies);
null_values = invalid_movies(mvs,invalid_movies,null_values,total_num_of_movies);


/**no need to valid and invalid arrays**/
if (null_values <0){

free(valid_movies);
mergeSort(mvs,total_num_of_movies);

printf("null<0\n");
return 0;
}
	

printMovies(mvs ,total_num_of_movies);



fclose(fileName);



  return 0;
 }



