//use constructor to initialize employee name and id ,display using displahy()//
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    Employee(string n, int employeeId) : name(n), id(employeeId) {}

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Employee emp("John Doe", 12345);
    emp.displayDetails();
    return 0;
}
