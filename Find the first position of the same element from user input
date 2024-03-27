//Find the first position of the same element from user input

#include <stdio.h>
void inputArr(int Arr[], int size);
int firstPos(int Arr[], int N, int X);

int main(){
  int X;
    int size;
    int Arr[size];
    printf("Insert Max array hier: ");
    scanf("%d", &size);

 inputArr(Arr, size);
printf("Enter the Elements you want to search: ");
scanf("%d", &X);
  int first =  firstPos( Arr,  size,  X);
  if (first !=  -1){
     printf("first Position = %d \n", first);
  }
else{
  printf("None founded");
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
int firstPos(int Arr[], int N, int X){
    int first = -1;
    for (int i = 0; i  < N; i++){
      if(X != Arr[i])
        continue;
        if (first == -1)
            first = i;

    }
    return first;
}
