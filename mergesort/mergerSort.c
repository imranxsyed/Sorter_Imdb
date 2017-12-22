
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>



void sort(int[], int[],int[], int);
void sort(int first[], int second[],int output[], int size) {



int i, j, n = 0;
j = 0;
i = 0;
while (i < (size/2) && j < (size-(size/2))) {

if (first[i] < second[j]) {
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


void copy(int[],int[],int ,int );
void copy(int input[],int output[], int start, int end) {



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







void mergeSort(int[], int);
void mergeSort(int input[],int size ) {




if (size <= 1) {


return ;
}



int start=0, mid= (size/2),end = size -(size/2);



/**sending left sub**/
int* left = (int*) malloc(sizeof(int)*mid);
copy(input,left, start, mid);


        /**sending right sub**/
int *right = (int*) malloc(sizeof(int)*end);
copy(input , right, mid , size);


 mergeSort(left,mid);
          mergeSort(right,end);





sort(left, right,input, size);
free(left);
free(right);



return;



}



void reverseArr(int[]);
void reverseArr(int arr[]){

arr[0]= 3;
arr[1]= 2;
arr[2]= 1;

return;

}



printArr(int arr[], int index){

int i=0;

while(i<index){


    printf("%d\n", arr[i]);
    i++;
}
}






int main(){


int *p;
p = (int*)malloc(sizeof(int)*500);

FILE* file = fopen("numbers.txt", "r");


char line[400];
line[0]= '\0';
int counter=0;
char *token;



while (fgets(line,400,file)){


p[counter] = atoi(strtok(line,",")); counter++;

while ((token=strtok(NULL,","))){

p[counter] = atoi(token); counter++;

	


}




}

mergeSort(p,counter);
printArr(p,counter);



}

