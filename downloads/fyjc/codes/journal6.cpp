//Program-6
#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "ENTER A NUMBER BETWEEN 1-7 TO CHOOSE THE DAY OF THE WEEK:";
    cin>>number;
    cout << endl;
    switch(number)
    {
    case 1:
        cout << "MONDAY" << endl;
        break;
    case 2:
        cout << "TUESDAY" << endl;
        break;
    case 3:
        cout << "WEDNESDAY" << endl;
        break;
    case 4:
        cout << "THRUSDAY" << endl;
        break;
    case 5:
        cout << "FRIDAY" << endl;
        break;
    case 6:
        cout << "SATURDAY" << endl;
        break;
    case 7:
        cout << "SUNDAY" << endl;
        break;
    default:
        cout << "INVALID" << endl;
        break;
    }
    cout << "\nAMAN DINESH YADAV";
    return 0;
}