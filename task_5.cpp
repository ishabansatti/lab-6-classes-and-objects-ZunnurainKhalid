#include <iostream>
using namespace std;

struct Address {
    string street;
    string city;
    int postalCode;
};

class Hospital {
public:
    string name;
    Address location;

    Hospital(string n, string s, string c, int p) {
        name = n;
        location.street = s;
        location.city = c;
        location.postalCode = p;
    }

    void display() {
        cout << name << endl;
        cout << location.street << " " << location.city << " " << location.postalCode << endl;
    }
};

int main() {
    Hospital h("CityHospital", "MainStreet", "Lahore", 54000);
    h.display();

    return 0;
}