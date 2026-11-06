//10
#include<iostream>

using namespace std;

int findfact(int x);
int main() {
  int num, fact;
  cout << "ENTER A NUMBER:";
  cin>>num;
  fact = findfact(num);
  cout << "FACTORIAL:"<<fact<<endl;
  cout << "AMAN DINESH YADAV";
  return 0;
}
int findfact(int x) {
  int a = 1;
  for(int i = 1; i <= x; i++) {
    a = a*i;
  }
  return a;
}