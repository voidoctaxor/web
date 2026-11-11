//ex7B
#include<iostream>
using namespace std;
//error?!


class person {
public:
    virtual void display() {
        cout<<"THE NAME OF THE STUDENT IS TOM"<<endl;
    }
};

class student:public person {
public:
    void display() {
        cout<<"THE NAME OF THE PERSON IS BOB"<<endl;
    }
};

int main() {

    person x;
    student y;
    person *n;
    n=&x;

    cout<<"AS PER BASE CLASS : "<<endl;
    //octaxor
    n->display();
    n=&y;
    cout<<"AS PER DERIVED CLASS : "<<endl;
    n->display();

    cout << "\nAMAN DINESH YADAV" << endl;

    return 0;
}
