//Write a function (in algorithmic notation) to determine whether the elements of a table are arrays of integers arranged sequentially from smallest to largest. The input table contains at least two elements.
//  Example:
// + If there is an array T=[1 4 6 9 15 18], then the output is true
// + If there is an array T=[1 4 6 15 9 18], then the output is false

#include <stdio.h>

void inputArr(int Arr[], int size);
int greaterSize(int Arr[], int size);


int main(){
   int X;
    int size;
    printf("Insert Max array hier: ");
    scanf("%d", &size);
    int Arr[size];
    inputArr(Arr, size);
 
    
      int Check = greaterSize(Arr, size);
      if(Check == 1){
        printf("True");
      }
      else{
        printf("False");  
      }
    }


void inputArr(int Arr[], int size){
  int i;
	
	for(i = 0; i < size; i++){
		printf("Input element %d: ",i);
		scanf("%d",&Arr[i]);
    }
}

int greaterSize(int Arr[], int size){
    int i = 1;
    int Check = 1;
    while((i < size) && (Check == 1)){
      if(Arr[i] >= Arr[i + 1]){
        Check = 0;
      }
      i++;
    }
    return Check;
}

