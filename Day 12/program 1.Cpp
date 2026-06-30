//create student class with data members name, roll number and marks. Create a function to display the details of student. Create another class result which is derived from student class. This class has a member function to calculate the grade of student based on marks. Create an object of result class and display the details of student along with grade.
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;
    float marks;

public:
    Student(string n, int roll, float m) : name(n), rollNumber(roll), marks(m) {}

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Result : public Student {
public:
    Result(string n, int roll, float m) : Student(n, roll, m) {}

    char calculateGrade() {
        if (marks >= 80) {
            return 'A';
        } else if (marks >= 60) {
            return 'B';
        } else {
            return 'C';
        }
    }
};

int main() {
    Result student("Alice", 123, 85.5);

    student.displayDetails();
    cout << "Grade: " << student.calculateGrade() << endl;

    return 0;
}
