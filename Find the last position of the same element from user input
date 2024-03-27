//Find the last position of the same element from user input

#include <stdio.h>
void inputArr(int Arr[], int size);
int lastPos(int Arr[], int N, int X);

int main(){
  int X;
    int size;
    int Arr[size];
    printf("Insert Max array hier: ");
    scanf("%d", &size);

    inputArr(Arr, size);

  printf("Enter Element you want to search: ");
  scanf("%d", &X);
  int last =  lastPos( Arr,  size,  X);
  if (last !=  -1){
     printf("Last Position = %d \n", last);
  }
  else{
    printf("Not available");
  }

        return 0;
}

void inputArr(int Arr[], int size){
    int i;
	for(i = 0; i < size; i++){
		printf("Input element %d: ",i);
		scanf("%d",&Arr[i]);
}
}
int lastPos(int Arr[], int N, int X){
    int last = -1;
    for (int i = N - 1; i  >= 0; i--) {
        if (X ==  Arr[i]){
            last = i;
          break;
        }
    }
    return last;
}
