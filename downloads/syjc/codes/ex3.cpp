//ex3
#include<iostream>
using namespace std;
//error?!


class Circle {
    float r, a, c, x, y;
public:
    void access();
    void circumference();
    void area() {
        float s;
        a = 3.14 * r * r ;
        cout<<"AREA OF CIRCLE : "<< a <<endl;
    }
    void print() {
        cout<<"THE RADIUS IS : "<< r <<endl;
        cout<<"THE COORDINATES ARE : ("<< x <<","<< y <<")" <<endl;
    }
};
void Circle :: access() {
    cout<<"ENTER X-COORDINATE : " ;
    cin>>x;
    //octaxor
    cout<<"ENTER Y-COORDINATE : " ;
    cin>>y;
    cout<<"ENTER THE RADIUS : " ;
    cin>>r;
}
void Circle :: circumference() {
    float c;
    c = 2*3.14*r;
    cout<<"THE CIRCUMFERENCE IS : "<< c <<endl;
}
int main() {
    cout<<"ENTER NO. OF CIRCLES : ";
    int n;
    cin>>n;
    Circle y;
    for(int i=0; i<n; i++) {
        cout <<"CIRCLE : "<< i+1 <<endl;
        y.access();
        y.circumference();
        y.area();
        y.print();
    }
    cout << "\nAMAN DINESH YADAV" << endl;
}
