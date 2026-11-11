//ex7A
#include<iostream>
using namespace std;
//error?!


class Student {
protected:
    int rollNo;
public:
    void setRollNo(int r) {
        rollNo = r;
    }
    void getRollNo(void) {
        cout << "STUDENT MARKS DETAILS" << endl;
        cout << "ROLL NO : " << rollNo << endl;
    }
};

class Test: public Student {
protected:
    float marks1, marks2;
public:
    void setMarks(float x, float y) {
        marks1 = x;
        marks2 = y;
    }
    void getMarks() {
        cout << "MARKS 1 : " << marks1 << endl;
        cout << "MARKS 2 : " << marks2 << endl;
    }
};

class Sports {
protected:
    float score;
public:
    //octaxor
    void setScore(float s) {
        score = s;
    }
    void getScore(void) {
        cout << "SPORTS SCORE : " << score << endl;
    }
};

class Result: public Test, public Sports {
    float total;
public:
    void display() {
        total = marks1 + marks2 + score;
        getRollNo();
        getMarks();
        getScore();
        cout << "TOTAL : " << total << endl;
        cout << endl;
    }
};

int main() {

    Result student;
    student.setRollNo(6322);
    student.setMarks(90, 85);
    student.setScore(80);
    student.display();

    cout << "AMAN DINESH YADAV" << endl;

    return 0;
}