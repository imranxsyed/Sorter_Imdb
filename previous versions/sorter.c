#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

typedef struct movies Movie;
struct movies {

    char color[50];
    char director_name[50];
    int num_critic_for_reviews;
    int duration;
    int director_facebook_likes;
    int actor_3_facebook_likes;
    char actor_2_name[50];
    int actor_1_facebook_likes;
    int gross;
    char genres[50];
    char actor_1_name[50];
    char movie_title[50];
    int num_voted_users;
    int cast_total_facebook_likes;
    char actor_3_name[50];
    int facenumber_in_poster;
    char plot_keywords [50];
    char movie_imdb_link [50];
    int num_user_for_reviews;
    char language [50];
    char country[50];
    char content_rating[50];
    int budget;
    int title_year;
    int actor_2_facebook_likes;
    float imdb_score;
    float aspect_ratio;
    int movie_facebook_likes;


};


void subStringWord(char*, char*);
void subStringWord(char first[], char second[]){

int index;


for (index= 0; index< strlen(first); index+=1){

    second[index]= first[index];

}
second[index]= '\0';
return;
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


   char color[50];
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
    char actor_3_name[500];
    int facenumber_in_poster;
    char plot_keywords [500];
    char movie_imdb_link [500];
    int num_user_for_reviews;
    char language [500];
    char country[500];
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
  content_rating[0] = '\0';





 

 	char token[50];
 	token[0]= '\0';
	char line[500];
    	line[0]= '\0'; // making a string that can hold 500 characters at a time

 
  	int total_num_of_movies=0, movie_number=0,track_tokenizer=0, i =0;


	
 	Movie data;


  	FILE* fileName = fopen("movie_metadata.csv", "r"); // getting the pointer to the the file
  	FILE* ouputName = fopen("MaxLength_output.csv", "w");

	while (fgets(line,500,fileName)){

		total_num_of_movies++;
	}//we got the total number of lines. i.e. Total num of movies

	//making an array of the total num of movies

	Movie movies[total_num_of_movies];

	/*printf("Total num of movies: %d\n", total_num_of_movies);
	printf("Array Size: %d\n", (sizeof(movies)/ sizeof(Movie)));*/

		
	fclose(fileName);
    	fileName = fopen("movie_metadata.csv", "r");
	line[0] = '\0';
    	while (fgets(line,500,fileName)){

    		//value of color, putting the value of color into the data
    		i = subTokenize(line, token,i);
		

   		printf("%s\n", token);

        
         
        

      
      		i = subTokenize(line, token,i);
		
      		printf("%s\n", token);

        

        
        
         i = subTokenize(line, token,i); printf("%d\n", atoi(token));
         i = subTokenize(line, token,i); printf("%d\n", atoi(token));
         i = subTokenize(line, token,i); printf("%d\n", atoi(token));

        //  token = strtok(NULL, ","); printf("%s\n", token);
         i = subTokenize(line, token,i);printf("%s\n", token);
          if (strlen(token)> strlen(actor_2_name)){ strcpy(actor_2_name, token);}

        
           i = subTokenize(line, token,i);printf("%d\n", atoi(token));
            i = subTokenize(line, token,i);printf("%d\n", atoi(token));


        //  token = strtok(NULL, ",");
        i = subTokenize(line, token,i);
        printf("%s\n", token);
          if (strlen(token)> strlen(genres)){ strcpy(genres, token);}

          //token = strtok(NULL, ",");
          i = subTokenize(line, token,i);
          printf("%s\n", token);
          if (strlen(token)> strlen(actor_1_name)){ strcpy(actor_1_name, token);}

        //  token = strtok(NULL, ",");
        i = subTokenize(line, token,i);
        printf("%s\n", token);
          if (strlen(token)> strlen(movie_title)){ strcpy(movie_title, token);}

         // token = strtok(NULL, ",");
         // token = strtok(NULL, ",");
         i = subTokenize(line, token,i); printf("%d\n", atoi(token));
        i = subTokenize(line, token,i);printf("%d\n", atoi(token));

           //token = strtok(NULL, ",");
            i = subTokenize(line, token,i);
            printf("%s\n", token);
          if (strlen(token)> strlen(actor_3_name)){ strcpy(actor_3_name, token);}

          //token = strtok(NULL, ",");
           i = subTokenize(line, token,i); printf("%d\n", atoi(token));

         // token = strtok(NULL, ",");
          i = subTokenize(line, token,i);
          printf("%s\n", token);
          if (strlen(token)> strlen(plot_keywords)){ strcpy(plot_keywords, token);}

         // token = strtok(NULL, ",");
          i = subTokenize(line, token,i);
          printf("%s\n", token);
          if (strlen(token)> strlen(movie_imdb_link)){ strcpy(movie_imdb_link, token);}

         // token = strtok(NULL, ",");
          i = subTokenize(line, token,i);printf("%d\n", atoi(token));

         // token = strtok(NULL, ",");
          i = subTokenize(line, token,i);
          printf("%s\n", token);
          if (strlen(token)> strlen(language)){ strcpy(language, token);}

         // token = strtok(NULL, ",");
          i = subTokenize(line, token,i);
          printf("%s\n", token);
          if (strlen(token)> strlen(country)){ strcpy(country, token);}

         // token = strtok(NULL, ",");
          i = subTokenize(line, token,i);
          printf("%s\n", token);
          if (strlen(token)> strlen(content_rating)){ strcpy(content_rating, token);}

         
            i = subTokenize(line, token,i);printf("%d\n", atoi(token));
            i = subTokenize(line, token,i);printf("%d\n", atoi(token));
            i = subTokenize(line, token,i);printf("%d\n", atoi(token));
            i = subTokenize(line, token,i); printf("%d\n", atoi(token));
            i = subTokenize(line, token,i); printf("%d\n", atoi(token));
            i = subTokenize(line, token,i); printf("%d\n", atoi(token));

              i=0;

              line[0]= '\0';
	movie_number++;

	printf("movie number: %d\n", movie_number);


}    //loop ends

fprintf(ouputName, "color:,letsSee %d\ndirector: %d\nactore_2_name: %d\ngenres: %d\nactor_1_name: %d\nmovie_title: %d\nactor_3name: %d\nplot_Keywords: %d\nmovie_link: %d\nlanguage: %d\ncountry %d\ncontent_rating: %d\n",strlen(color),strlen(director_name), strlen(actor_2_name),strlen(genres), strlen(actor_1_name),strlen(movie_title),strlen(actor_3_name), strlen(plot_keywords), strlen(movie_imdb_link),strlen(language),strlen(country), strlen(content_rating) );




fclose(fileName);
fclose(ouputName);


  return 0;
 }






