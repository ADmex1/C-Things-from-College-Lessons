#include <stdio.h>
void inputArr(int a[2][5][2], int size);
void arrtiga(int a[2][5][2], int i, int j, int k);
int main(){
    int a[2][5][2];
inputArr(a, sizeof(a)/sizeof(a[0]));
 arrtiga(a, sizeof(a)/sizeof(a[0]), sizeof(a[0])/sizeof(a[0][0]), sizeof(a[0][0])/sizeof(a[0][0][0]));
    return 0;
}
void inputArr(int a[][5][2], int size){
        printf("Enter Values: \n");
        for(int i = 0; i < size; i++){
            for(int j=0; j < 5; j++){
                for(int k=0; k<2; k++){
                    scanf("%d", &a[i][j][k]);
                }
                }
            }
}
void arrtiga(int a[][5][2], int i, int j, int k){
        for(int x = 0;  x < i; x++){
            for(int y=0; y< j; y++){
                for(int z=0; z< k; z++) {
                printf("Row i  = %d , Column J =  %d ,Layer K = %d = %d\n", x , y, z, a[x][y][z]);
            }
        }
        }
}
    
