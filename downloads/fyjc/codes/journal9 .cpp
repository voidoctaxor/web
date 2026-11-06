//9.Write a program in C++ to display table from 1 to 10 using nested for loop
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    for(int i=1; i<=10; i++)//rows
    {
        for(int j=1; j<=10; j++) //colunm
        {
            cout<<setw(4)<<i*j;
        }
        cout<<endl;
    }
    cout << "\nAMAN DINESH YADAV";
    return 0;
}