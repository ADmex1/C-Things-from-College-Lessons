#include <stdio.h>
void inputArr(int a[2][5], int size);
void arrtiga(int a[2][5], int i, int j); 
int main(){
    int a[2][5];
        inputArr(a, sizeof(a)/sizeof(a[0]));
        arrtiga(a, sizeof(a)/sizeof(a[0]), sizeof(a[0])/sizeof(a[0][0]));
    return 0;
}
void inputArr(int a[2][5], int size){
      printf("Enter Values: \n");
        for(int i = 0; i < size; i++){
            for(int j=0; j < 5; j++){
                    scanf("%d", &a[i][j]);
                }
                }
}

void arrtiga(int a[2][5], int i, int j){
for(int x= 0; x <i; x++){
            for(int y=0; y<j; y++){
                printf("Row x = %d , Column y =  %d  = %d\n", x ,y, a[x][y]);
            }
        }
}
