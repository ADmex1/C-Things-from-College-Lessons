#include <stdio.h>

void inputArr(int Arr[], int size);
void greaterSize(int Arr[], int size, int input);

int main(){
    int X;
    int size;
    int Arr[size];
    printf("Insert Max array hier: ");
    scanf("%d", &size);

    inputArr(Arr, size);

    printf("Input Interget number: ");
    scanf("%d", &X);
    greaterSize(Arr, size, X);
}

 void inputArr(int Arr[], int size){
	int i;
	
	for(i = 0; i < size; i++){
		printf("Input element %d: ",i);
		scanf("%d",&Arr[i]);
    }
}

void greaterSize(int Arr[], int size, int input){
    int i;
    int amount = 0;
    for (i = 0; i < size; i++ ){
        if(Arr[i] > input){
            amount++;
        }
    }
    printf("%d", amount);
}
