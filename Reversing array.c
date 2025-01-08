#include <stdio.h>

//idk what is this but in between function and procedure 
void inputArr(int Arr[], int size);
void revArr(int Arr1[], int size);
void reversedArr(int Arr1[], int maxSize);
void procArr();

//Size Input
void procArr(){
    int maxSize;
    printf("Input the max of an array: ");
    scanf("%d", &maxSize);

    int Arr[maxSize];
    inputArr(Arr, maxSize);

 reversedArr(Arr, maxSize);
    revArr(Arr, maxSize);
   return 
}

//Array Value Input
void inputArr(int Arr[], int size){
	int i;
	
	for(i = 0; i < size; i++){
		printf("Input element %d: ",i);
		scanf("%d",&Arr[i]);
	}
}
//Reversed Array
void revArr(int Arr1[], int size){
    int n,i;
    printf("Here are the  Output: ");
    for (int i = size-1; i>=0; i--){
        printf("%d ", Arr1[i]);
    }
}

//Original Array
 void reversedArr(int Arr1[], int maxSize){
printf("\nHere are the Input: ");
    for(int i = 0; i < maxSize; i++){
        printf("%d", Arr1[i]);
        printf(" ");
    }
    printf("\n");

}


//main Function
int main(){

 procArr();

   return 0;    
}
