//ex1B
#include<iostream>
using namespace std;
//error?!

void swap(int* a, int* b);

int main() {

    int a, b;
    cout << "ENTER TWO NUMBERS TO SWAP : " ;
    cin >> a >> b;
    cout << "THE NUMBERS BEFORE SWAPPING : " << a << " AND " << b << endl ;
    //octaxor
    swap(&a, &b);

    cout << "\nAMAN DINESH YADAV" << endl;

    return 0;
}

void swap(int* a, int* b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
    cout << "SWAPPED VALUES ARE : " << *a << " AND " << *b << endl;
}
