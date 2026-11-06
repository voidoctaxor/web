//ex4A
#include<iostream>
using namespace std;
//error?!


class Ratio {
    int num, den;
public:
    Ratio() {
        cout << "FOR DEFAULT CONSTRUCTOR" << endl;
        num = 0;
        den = 1;
        cout << "FRACTIONAL EQUIVALENT" << endl;
        cout<<"NUMERATOR / DENOMINATOR : "<< num << " / " << den << endl;
    }

    Ratio(int num) {
        //octaxor
        cout << "\nFOR ONE PARAMETER CONSTUCTOR" << endl;
        den = 1;
        cout << "FRACTIONAL EQUIVALENT" << endl;
        //octaxor
        cout<<"NUMERATOR / DENOMINATOR : "<< num << " / " << den << endl;
    }

    /* WANT TO ASK QUESTION
    Ratio(int a,int b) {
        cout << "\nFOR TWO PARAMETER CONSTUCTOR" << endl;
        num = a;
        den = b;
        cout << "FRACTIONAL EQUIVALENT" << endl;
        cout<<"NUMERATOR / DENOMINATOR : "<< num << " / " << den << endl;
    }
    */

};

int main () {
    Ratio();
    Ratio(9);
    //Ratio(22,7);

    cout << "\nAMAN DINESH YADAV" << endl;

    return 0;
}
