//14. Write a program to maximum of 2 numbers using conditional operator.
#include<iostream>

using namespace std;
int main()
{
    int no1,no2,max;
    cout<<"ENTER TWO NUMBERS:";
    cin>>no1>>no2;
    max=((no1>no2)?no1:no2);
    cout<<"Maximum No Is:"<<max<<endl;
    return 0;
}