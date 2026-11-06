//ex5A
#include<iostream>
using namespace std;
//error?!


class Complex {
    float x,y;
public:
    Complex() {}

    Complex(float a) {
        x=y=a;
    }

    Complex(float real, float imag) {
        x=real;
        y=imag;
    }

    friend Complex sum(Complex,Complex);
    friend void show(Complex);
};

Complex sum(Complex c1, Complex c2) {
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
void show (Complex c) {
    cout<< c.x << " + " << c.y << "i" <<endl;
}
int main() {
    cout<<"ENTER THE NUMBER : " ;
    //octaxor
    float no;
    cin >> no;
    Complex a(no);
    Complex b(2.1,3.2);
    Complex c;
    c = sum(a,b);
    cout<<" a : ";
    show(a);
    cout << " b : ";
    show(b);
    cout << " c : ";
    show(c);
    cout << "\nAMAN DINESH YADAV" << endl;
    return 0;
}