#include <iostream>
#include <string>
using namespace std;

class Publication {
public:
    string title;
    float price;

    Publication() { title="", price=0.0; }

    void getData() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    void displayData() {
        cout << "Title: " << title <<endl;
        cout << "Price: " << price <<endl;
    }
};

class Book : public Publication {
public:
    int pageCount;

    Book() {pageCount=0;}

    void getData() {
        Publication::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void displayData() {
        Publication::displayData();
        cout << "Page Count: " << pageCount <<endl;
    }
};

class Tape : public Publication {
public:
    float playingTime;

    Tape() : playingTime(0.0) {}

    void getData() {
        Publication::getData();
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
    }

    void displayData() {
        Publication::displayData();
        cout << "Playing Time (minutes): " << playingTime <<endl;
    }
};

int main() {
    Book book;
    Tape tape;

    try {
        cout << "Enter data for the book:" <<endl;
        book.getData();

        cout << "Enter data for the tape:" <<endl;
        tape.getData();

        cout << "\nDisplaying book data:" <<endl;
        book.displayData();

        cout << "\nDisplaying tape data:" <<endl;
        tape.displayData();
    } catch (...) {
        book.title = "";
        book.price = 0.0;
        book.pageCount = 0;
        tape.title = "";
        tape.price = 0.0;
        tape.playingTime = 0.0;
    }

    return 0;
}
