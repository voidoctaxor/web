//ex1D
#include<iostream>
using namespace std;
//error?!

int main() {
    int arr[100], n, *p, sum = 0;
    p = arr;
    cout << "ENTER HOW MANY NUMBERS : " ;
    cin >> n;
    cout << "ENTER THE ELEMENTS OF ARRAY : " ;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << "THE ELEMENT AT arr[" << i << "] : " << arr[i] << " ,IT'S LOCATION IS : " << &arr[i] << " AND IT'S SIZE IS : " << sizeof(arr[i]) << endl;
        //octaxor
        sum+=arr[i];
        cout << "SUM OF ELEMENTS SO FAR IS : " << sum << " AND IT'S LOCATION " << &sum << endl;
    }
    cout << "TOTAL SUM : " << sum << endl;
    cout << "\nAMAN DINESH YADAV" << endl;
    return 0;
}