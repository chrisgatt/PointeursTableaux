#include <iostream>
using namespace std;

int monTab[] = {1, 2, 3, 4, 5};
const int iMax = 5;

int main(void){
    for (int i=0; i < iMax; i++){
        cout << "monTab[" << i << "] = " << monTab[i] << endl;
    }
}
