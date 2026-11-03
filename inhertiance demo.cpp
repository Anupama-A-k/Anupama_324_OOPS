#include <iostream>
using namespace std;

class Vehicle {
public:
    void fuel() { cout << "Runs on fuel" << endl; }
};

class Car : public Vehicle {
public:
    void wheels() { cout << "Has 4 wheels" << endl; }
};

class SportsCar : public Car {
public:
    void turbo() { cout << "Has turbo engine" << endl; }
};

int main() {
    SportsCar sc;
    sc.fuel();    // from Vehicle
    sc.wheels();  // from Car
    sc.turbo();   // own member
    return 0;
}
