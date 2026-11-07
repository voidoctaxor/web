//15
#include<iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, average, percentage;
    char grade;

    cout << "Enter the marks of five subjects: \n";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    if (average >= 90)
    {
        grade = 'A';
    }
    else if (average >= 80 && average < 90)
    {
        grade = 'B';
    }
    else if (average >= 70 && average < 80)
    {
        grade = 'C';
    }
    else if (average >= 60 && average < 70)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "The Total marks: " << total << "/500";
    cout << "\nThe Average marks: " << average;
    cout << "\nThe Percentage: " << percentage << "%";
    cout << "\nThe Grade: " << grade << endl;
    cout << "Aman Dinesh Yadav";

    return 0;
}
