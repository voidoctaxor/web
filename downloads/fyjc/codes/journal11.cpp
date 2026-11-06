//11
#include<iostream>

using namespace std;

int main() {
  int i = 1, num;
  int odd_sum = 0, even_sum = 0;
  cout<<"ENTER A NUMBER:";
  cin>>num;
  while(i <= num) {
    if(i%2 == 0) {
      even_sum += i;
    }
    else
    {
      odd_sum += i;
    }
    i++;
  }
  cout<<"SUM OF ALL ODD NUMBERS ARE:"<<odd_sum;
  cout<<"\nSUM OF ALL EVEN NUMBERS ARE:"<<even_sum;
  cout << "\nAMAN DINESH YADAV";

  return 0;
}