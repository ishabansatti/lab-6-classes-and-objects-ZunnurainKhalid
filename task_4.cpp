#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
        name = "Unknown";
        age = 0;
    }

    Person(string n) {
        name = n;
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

int main() {
    Person p1;
    Person p2("Ali");
    Person p3("Ahmed", 20);

    cout << p1.name << " " << p1.age << endl;
    cout << p2.name << " " << p2.age << endl;
    cout << p3.name << " " << p3.age << endl;

    return 0;
}