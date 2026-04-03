#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double width;
    double height;
};

Box largerBox(Box a, Box b) {
    double v1 = a.length * a.width * a.height;
    double v2 = b.length * b.width * b.height;

    if(v1 > v2)
        return a;
    else
        return b;
}

int main() {
    Box b1, b2, result;

    cin >> b1.length >> b1.width >> b1.height;
    cin >> b2.length >> b2.width >> b2.height;

    result = largerBox(b1, b2);

    cout << result.length << " " << result.width << " " << result.height << endl;

    return 0;
}