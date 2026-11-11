//ex5B
#include<iostream>
using namespace std;
//error?!

class Ratio {
    float x,y;
public:
    Ratio() {}
    Ratio(float num, float den) {
        x = num / den;
        y = num / den;
    }
    Ratio operator+ (Ratio r);
    Ratio operator/ (Ratio p);

    void display() {
        cout<<x<<endl;
    }

};

Ratio Ratio :: operator+ (Ratio r) {
    Ratio temp;
    temp.x = x + r.y ;
    return temp;
}
Ratio Ratio :: operator/ (Ratio p) {
    Ratio temp;
    //octaxor
    temp.x = x / p.y ;
    return temp;
}
int main() {

    Ratio r1, r2, r3, r4;
    r1 = Ratio(3.5,2.5);
    r2 = Ratio (5.5,2.5);
    r3 = r1 + r2;
    r4 = r1 / r2;
    cout << " r1 : ";
    r1.display();
    cout << " r2 : ";
    r2.display();
    cout << " r3 : ";
    r3.display();
    cout << " r4 : ";
    r4.display();

    cout << "\nAMAN DINESH YADAV" << endl;
    return 0;
}
