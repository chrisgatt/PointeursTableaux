#include <iostream>
#include <math.h>
using namespace std;

int * monInt = new int(9);
double resul;

struct NegativeParamException : public std::exception {
    const char * what () const throw () {
        return "Invalid parameter!";
    }
};

double mySqrt (const int &iParam){
    if (iParam < 0) throw NegativeParamException ();
    return sqrt (iParam);
}

int main(int argc, char **argv){
    try{
        if (argc == 2) *monInt = atoi (argv[1]);
        resul = mySqrt (*monInt);
        cout << "sqrt(" << *monInt << ") = " << resul << endl;
        delete (monInt); monInt = nullptr;
    } catch (const std::exception& ex) {
        std::cerr << "Exception raised: " << ex.what() << std::endl;
    }
}
