#include <iostream>
#include <memory>
#include <math.h>
using namespace std;

int monInt{9};
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

double myFunc (unique_ptr<int> iParam1, const double &iParam2){
    return (*iParam1 + iParam2);
}

int main(int argc, char **argv){
    try{
        if (argc == 2) monInt = atoi (argv[1]);
        resul = myFunc (unique_ptr<int> (new int (42)), mySqrt (monInt));
        cout << "Résultat: " << resul << endl;
    } catch (const std::exception& ex) {
        std::cerr << "Exception raised: " << ex.what() << std::endl;
    }
}
