#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
};
int main() {
    Book b[3];
    for(int i = 0; i < 3; i++) {
        cin >> b[i].title >> b[i].author >> b[i].price;
    }
    for(int i = 0; i < 3; i++) {
        cout << b[i].title << " " << b[i].author << " " << b[i].price << endl;
    }
    return 0;
}