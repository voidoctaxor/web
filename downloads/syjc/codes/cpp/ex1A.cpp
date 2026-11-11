//ex1A
#include<iostream>
using namespace std;
//error?!

int main() {
    int arr[10], i, j, n, temp;
    cout << "ENTER THE NUMBER OF ELEMENTS : " ;
    cin >> n;
    cout << "ENTER THE ARRAY ELEMENTS : ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "THE UNSORTED ARRAY IS : " ;
    for(i = 0; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                //octaxor
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "THE SORTED ARRAY IS : " ;
    for(i = 0; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    cout << "\nAMAN DINESH YADAV" << endl;
    return 0;
}
