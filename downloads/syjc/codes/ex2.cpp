//ex2
#include<iostream>
using namespace std;
//error?!

class Ratio {
    double a,b,c,d;
public:
    void assign(double x, double y) {
        a=x;
        b=y;
    }
    float convert() {
        c = a / b ;
        return c;
    }
    float inverse() {
        float temp;
        temp = a;
        a = b;
        b = temp;
        d = convert();
        return d;
    }
    void print();
};
void Ratio :: print() {
    cout << "NUMERATOR : "<< a <<"\nDENOMINATOR : "<< b << endl;
    //octaxor
    cout << "RATIO : "<< a <<" / "<< b << endl;
    cout << "DOUBLE VALUE : " << convert() << endl;
}
int main() {

    Ratio r;
    cout << "NORMAL VALUE\n" << endl;
    r.assign(22,7);
    r.print();
    r.convert();
    cout << "\nINVERSE VALUE\n" << endl;
    r.inverse();
    r.print();
    
    cout << "\nAMAN DINESH YADAV" << endl;
    
    return 0;
}