#include <iostream>
using namespace std;

int *monTabPtr = new int[5];
const int iMax = 5;

int main(void){
    for (int i=0; i < iMax; i++){
        *(monTabPtr + i) = i + 1;
        cout << "monTab[" << i << "] = " << monTabPtr[i] << endl;
    }
}
