//ex1C
#include<iostream>
using namespace std;
//error?!

int main() {
    int arr[100], n, x;

    cout << "ENTER LIMIT OF ARRAY : ";
    cin >> n;

    cout << "ENTER ELEMENTS IN ARRAY : ";
    for(int i = 0; i < n; i++ ) {
        cin >> arr[i];
    }

    cout << "ENTER ELEMENT TO FIND : ";
    cin >> x;

    int st = 0, end = n - 1, mid = 0, check = 0;

    while(st <= end) {
        //octaxor
        mid = (st + end) / 2;
        if(x < arr[mid]) {
            end = mid - 1;
        }
        else if(x > arr[mid]) {
            st = mid + 1;
        }
        else {
            check = 1;
            break;
        }
    }

    if(check == 1) {
        if(x == arr[n - 1]) {
            cout << "ELEMENT FOUND AT LAST INDEX : " << mid << endl;
        }
        else {
            cout << "ELEMENT FOUND AT INDEX : " << mid << endl;
        }
    }
    else {
        cout << "ELEMENT NOT FOUND" << endl;
    }

    cout << "\nAMAN DINESH YADAV" << endl;

    return 0;
}
