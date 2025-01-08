#include <stdio.h>

//Declaration
void inputArr(int Arr[], int size);
void Max(int Arr1[], int Arr2[], int size);
int FindMax(int Arr[], int size);

//Main Function
int main(){
    int i;
    int maxSize;
    printf("Input Max size of an Array Here: ");
    scanf("%d", &maxSize);

    int Arr1[maxSize], Arr2[maxSize];

    printf("Input Value of Array 1 Down Bellow! \n");
    inputArr(Arr1, maxSize);

    printf("Input Value of Array  2 Down Bellow! \n");
    inputArr(Arr2, maxSize);

    Max(Arr1, Arr2, maxSize);

}
//Input
void inputArr(int Arr[], int size){
    int i;
	
	for(i = 0; i < size; i++){
		printf("Input element %d: ",i);
		scanf("%d",&Arr[i]);
	}
}
//Finding Max Value
void Max(int Arr1[], int Arr2[], int size){
    int Max1 = FindMax(Arr1,  size);
    int Max2 = FindMax(Arr2,  size);
        
    if(Max1 > Max2){
        printf("Tabel 1");
    }
    else if(Max1 < Max2){
        printf("Tabel 2");
    }
    else{
        printf("None");
    }
    
}
int FindMax(int Arr[], int size){
    int max = Arr[0];
    for(int i = 1; i < size; i++){
        if(Arr[i]>max){
            max = Arr[i];
        }
    }
return max;
}
