#include<iostream>
using namespace std;


class Vehicle
{
public:
    int speed;

    void setSpeed(int s)
    {
        speed = s;
    }
};


class Car : public Vehicle
{
public:
    void display()
    {
        cout << "Car speed is: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car c;

    c.setSpeed(80);
    c.display();

    return 0;
}
