#include <iostream>
using namespace std;

struct PublisherInfo {
    string name;
    int year;
};

class Book {
private:
    string title;
    string author;
    double price;
    PublisherInfo publisher;
    bool hasPublisher;
    bool available;
    static int totalBooks;

public:
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 1;
        available = true;
        hasPublisher = false;
        totalBooks++;
    }

    Book(string t, string a, double p) {
        title = t;
        author = a;
        available = true;
        hasPublisher = false;
        if(p > 0)
            price = p;
        else
            price = 1;
        totalBooks++;
    }

    Book(string t, string a, double p, PublisherInfo pub) {
        title = t;
        author = a;
        available = true;
        publisher = pub;
        hasPublisher = true;
        if(p > 0)
            price = p;
        else
            price = 1;
        totalBooks++;
    }

    void setPrice(double p) {
        if(p <= 0)
            cout << "Invalid price! Price must be greater than 0." << endl;
        else
            price = p;
    }

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }
    bool isAvailable() const { return available; }

    void checkOut() {
        if(!available)
            cout << "Error: '" << title << "' is not available." << endl;
        else {
            available = false;
            cout << "'" << title << "' checked out successfully." << endl;
        }
    }

    void returnBook() {
        available = true;
        cout << "'" << title << "' has been returned." << endl;
    }

    void display() const {
        cout << "Title: " << title << " | Author: " << author << " | Price: " << price << " | ";
        if(hasPublisher)
            cout << "Publisher: " << publisher.name << " (" << publisher.year << ") | ";
        else
            cout << "No publisher info | ";
        cout << "Available: " << (available ? "Yes" : "No") << endl;
    }

    static void showTotal() {
        cout << "Total books in system: " << totalBooks << endl;
    }
};

int Book::totalBooks = 0;

Book cheapest(Book a, Book b) {
    if(a.getPrice() < b.getPrice())
        return a;
    else
        return b;
}

int main() {
    PublisherInfo p1 = {"Pearson", 2008};
    PublisherInfo p2 = {"Addison", 1999};

    Book b1("Clean Code", "Robert Martin", 2500, p1);
    Book b2("The Pragmatic", "Hunt & Thomas", 3200, p2);
    Book b3("Design Patterns", "GoF", 4000);

    b3.setPrice(0);

    cout << "--- All Books ---" << endl;
    b1.display();
    b2.display();
    b3.display();

    b1.checkOut();
    b1.checkOut();
    b1.returnBook();
    b1.checkOut();

    cout << "Cheapest book:" << endl;
    Book c = cheapest(b1, b2);
    c.display();

    Book::showTotal();

    return 0;
}