#include <iostream>
using namespace std;

class Sensor {
public:
    static int totalSensors;
    int id;

    Sensor() {
        totalSensors++;
        id = totalSensors;
    }
};

int Sensor::totalSensors = 0;

int main() {
    Sensor s1, s2, s3, s4;

    cout << s1.id << endl;
    cout << s2.id << endl;
    cout << s3.id << endl;
    cout << s4.id << endl;

    cout << "Total Sensors: " << Sensor::totalSensors << endl;

    return 0;
}