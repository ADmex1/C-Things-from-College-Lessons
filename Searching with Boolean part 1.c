//Write a function (in algorithmic notation) to determine whether all the table elements are arrays of integers whose value is greater than an integer (X) provided by the user. The input table contains at least one element.
//  Example:
// + If there is an array T=[9 15 2 4 6], X=1, then the output is true
// +If there is an array T=[9 15 2 4 6], X=6, then the output is false

#include <stdio.h>

void inputArr(int Arr[], int size);
int greaterSize(int Arr[], int size, int input);


int main(){
   int X;
    int size;
    printf("Insert Max array hier: ");
    scanf("%d", &size);
    int Arr[size];
    inputArr(Arr, size);
    printf("Input Interget number: ");
    scanf("%d", &X);
    
    
      int Check = greaterSize(Arr, size, X);
      if(Check == 1){
        printf("T");
      }
      else{
        printf("F");  
      }
    }


void inputArr(int Arr[], int size){
  int i;
	
	for(i = 0; i < size; i++){
		printf("Input element %d: ",i);
		scanf("%d",&Arr[i]);
    }
}

int greaterSize(int Arr[], int size, int input){
    int i = 1;
    int Check = 1;
    while((i <= size) && (Check == 1)){
      if(Arr[i]<= input){
        Check = 0;
      }
      i++;
    }
    return Check;
}

