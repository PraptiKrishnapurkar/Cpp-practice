// Hybrid inheritance
#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo = 101;

    void showRollNo()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Test : public Student
{
public:
    int marks = 85;

    void showMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

class Sports
{
public:
    int score = 10;

    void showScore()
    {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Test, public Sports
{
public:
    void displayResult()
    {
        cout << "Total Score: " << marks + score << endl;
    }
};

int main()
{
    Result r;

    r.showRollNo();
    r.showMarks();
    r.showScore();
    r.displayResult();

    return 0;
}