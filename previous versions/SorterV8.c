#include "Sorter.h"


/**

-> Everything Going into the data values and arrays 
-> All uneccearry fields are added 
-> print method is added
-> corrected first[i]= '\0' in the subtokenize method
->added trim function

-> adding parameters and stdin

**/





int main(int argc, char* argv[]){


    if (argc < 3){

		printf("Invalid number of Parameters\n");
		exit(0);

	}

     Movie data;
  
     char append[2] = "a";
     char write[2] = "w";
     char token[500]; token[0]= '\0';
     char line[500]; line[0]= '\0'; 

    
     header[0] = '\0';
     sort_by[0] = '\0';


     strcpy(sort_by, argv[2]);


      int total_num_of_movies=0,track_tokenizer=0, null_values=0, non_null_values=0,target=500;


    
      Movie* mvs= (Movie*) malloc(sizeof(Movie)*target);

   
	
	fgets(header,500,stdin);//getting the header

	fgets(line,500,stdin); //getting the first line




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

	fgets(line,500,stdin);

		

            


}    //loop ends

/*printf("number of movies: %d\n", total_num_of_movies);
return 0 ;*/

//reallocating to the numbers of movies
mvs = realloc(mvs, sizeof(Movie)*(total_num_of_movies));


Movie* invalid_movies;
invalid_movies = (Movie*)malloc(sizeof(Movie)*total_num_of_movies);
null_values = invalid_values(mvs, invalid_movies, null_values , total_num_of_movies);


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



