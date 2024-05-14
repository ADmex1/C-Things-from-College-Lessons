#include <iostream>
using namespace std;
void Large(int Arr[], int size, int &Lbozo, int &pos);
void ArrInput(int Arr[], int size);
bool Type(int num);

int main(){ 
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
   
  int A[size];
        ArrInput(A, size);
    cout << endl;
 cout << "The array elements are:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << A[i] << endl;
    }
int Lbozo, pos;
Large( A, size,  Lbozo,  pos);

 cout << "Largest Number ist: " << Lbozo << endl;
 cout << "The position: " << (pos + 1) << endl;
 if(Type(Lbozo)){
    cout << "Number Type: " << Lbozo << "Odd(Ganjil)" << endl;
 }
 else{
    cout << "Number Type: " << Lbozo << "Even (Genap)" << endl;
 }
    return 0;
}

void ArrInput(int Arr[], int size){
    cout << "Input Values: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> Arr[i];
    }
}
void Large(int Arr[], int size, int &Lbozo, int &pos){
    Lbozo = Arr[0];
    pos = 0;
    for(int i = 1; i < size; i++){
        if(Arr[i] > Lbozo){
            Lbozo = Arr[i];
            pos = i;
        }
    }
}
bool Type(int num){
    return num % 2 !=0;
}
