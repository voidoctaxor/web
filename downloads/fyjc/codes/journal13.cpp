//PROGRAM-13
#include<iostream>

using namespace std;

int main() {
  cout << "ENTER THREE NUMBERS:";
  int a,b, c, largest;
  cin>>a>>b>>c;
  if(a > b && a > c) {
    cout<< "MAXIMUM IS:"<<a<< endl;
  }
  if(b > a && b > c) {
    cout<< "MAXIMUM IS:"<<b<< endl;
  }
  if(c > a && c > b) {
    cout<< "MAXIMUM IS:"<<c<< endl;
  }
  cout << "AMAN DINESH YADAV";

  return 0;
}