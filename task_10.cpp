#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double c) {
        if(c >= -273.15)
            celsius = c;
        else
            celsius = 0;
    }

    void setCelsius(double c) {
        if(c >= -273.15)
            celsius = c;
        else
            cout << "Invalid temperature" << endl;
    }

    double getCelsius() const {
        return celsius;
    }

    double getFahrenheit() const {
        return (celsius * 9/5) + 32;
    }

    double getKelvin() const {
        return celsius + 273.15;
    }
};

int main() {
    Temperature t(25);

    t.setCelsius(-300);

    cout << "Celsius: " << t.getCelsius() << endl;
    cout << "Fahrenheit: " << t.getFahrenheit() << endl;
    cout << "Kelvin: " << t.getKelvin() << endl;

    return 0;
}