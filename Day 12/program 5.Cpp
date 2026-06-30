//count total car objects created using static data member,incremented in constructor//
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    static int totalCars;  // Static data member

public:
    Car(string b, string m) : brand(b), model(m) {
        totalCars++;  // Increment static member when object of class is created
    }

    static void displayTotalCars() {
        cout << "Total cars created: " << totalCars << endl;
    }
};

// Initialize static member
int Car::totalCars = 0;

int main() {
    Car car1("Toyota", "Camry");
    Car car2("Honda", "Civic");
    Car car3("Ford", "Mustang");

    Car::displayTotalCars();  // Display total cars created

    return 0;
}
