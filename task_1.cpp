#include <iostream>
using namespace std;

class Circle {
public:
    double radius;
    double area();
    double circumference();
};
double Circle::area() {
    return 3.14159 * radius * radius;
}
double Circle::circumference() {
    return 2 * 3.14159 * radius;
}
int main() {
    Circle c;
    c.radius = 5;
    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.circumference() << endl;
    return 0;
}