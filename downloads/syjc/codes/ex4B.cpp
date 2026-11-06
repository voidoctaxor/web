//ex4B
#include<iostream>
using namespace std;
//error?!


class Ratio {
public:
    Ratio() {
        cout<<"\nOBJECT IS BORN"<<endl;
    }
    //octaxor
    void status() {
        cout<<"OBJECT IS ALIVE"<<endl;
    }
    ~Ratio() {
        cout<<"OBJECT IS DEAD"<<endl;
    }
};
int main() {
    cout << "AMAN DINESH YADAV" << endl;
    Ratio x;
    x.status();
    return 0;
}