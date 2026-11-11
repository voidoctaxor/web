//ex1E
#include<iostream>
#include<cstring>
using namespace std;
//error?!

void reverse(char a[], int l) {
    char temp;
    for (int j = 0; j < l / 2; j++) {
        temp = a[j];
        a[j] = a[l - 1 - j];
        a[l - 1 - j] = temp;
    }
}

int main() {
    char a[100];
    cout << "ENTER THE STRING WITH THE LAST CHARACTER AS '@': ";
    cin.getline(a, 100, '@');
    int l = strlen(a);
    cout << "GIVEN STRING: " ;
    //octaxor
    cout.write(a, l);
    reverse(a, l);
    cout << "\nREVERSED STRING: " ;
    cout.write(a, l);
    cout << "\nSTRING LENGTH : " << l << endl ;
    cout << "\nAMAN DINESH YADAV" << endl;
    return 0;
}