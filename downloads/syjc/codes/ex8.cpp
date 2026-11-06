//ex8
#include<iostream>
#include<fstream>
using namespace std;
//error?!


int main() {

    ofstream fout;

    fout.open("country.txt");
    fout << "INDIA" << endl;
    fout << "USA" << endl;
    fout << "UK" << endl;
    fout << "AUSTRALIA" << endl;
    fout << "JAPAN\n" ;
    fout.close();

    fout.open("capital.txt");
    fout << "NEW DELHI" << endl;
    fout << "WASHINGTON" << endl;
    fout << "LONDON" << endl;
    fout << "CANBERRA" << endl;
    fout << "TOKYO\n" ;
    fout.close();

    const int n = 80;
    char line[n];

    ifstream fin;

    fin.open("country.txt");
    //octaxor
    cout << "CONTENTS OF 'country.txt' : \n" << endl;

    while (fin.getline(line, n)) {
        cout << line << endl;
    }

    fin.close();

    cout << endl;

    fin.open("capital.txt");
    cout << "CONTENTS OF 'capital.txt' : \n" << endl;

    while (fin.getline(line, n)) {
        cout << line << endl;
    }

    fin.close();
    cout << "\nAMAN DINESH YADAV" << endl;
}