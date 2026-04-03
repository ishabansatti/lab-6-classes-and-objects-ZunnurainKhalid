#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;
};

void compare(Rectangle a, Rectangle b) {
    double area1 = a.length * a.width;
    double area2 = b.length * b.width;

    if(area1 > area2)
        cout << "First rectangle is larger" << endl;
    else if(area2 > area1)
        cout << "Second rectangle is larger" << endl;
    else
        cout << "Both rectangles have equal area" << endl;
}

int main() {
    Rectangle r1, r2;

    cin >> r1.length >> r1.width;
    cin >> r2.length >> r2.width;

    compare(r1, r2);

    return 0;
}