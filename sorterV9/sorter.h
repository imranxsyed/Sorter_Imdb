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

//headers and sorter variable
char header[500];
char sort_by[100];


/** method to compare 2 movies by determining factor**/
int compare_movie(Movie, Movie);

/** Tokenizer Function: personla tokenizer to tokenize each value  **/
int subTokenize(char* ,char*, int);


/** Function to print the results **/
void printMovies( Movie[], int, char[]);


/** function to saperate null values . if the movie_title is the sorting factor then all the movies with Null movie title denoted as NUll values**/
int invalid_values(Movie[],Movie[], int,int);



/** function to put all the valid movies into the array called valid_movies**/
void valid_values(Movie[],Movie[],int);


/** TRIM Function  **/
char* trim (char*);





