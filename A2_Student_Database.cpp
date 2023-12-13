#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string className;
    char division;
    string dob;
    string bloodGroup;
    string contactAddress;
    string phoneNumber;
    string drivingLicense;

public:
    Student() {
        name = "";
        rollNumber = 0;
        className = "";
        division = 'A';
        dob = "";
        bloodGroup = "";
        contactAddress = "";
        phoneNumber = "";
        drivingLicense = "";
    }

    Student(string n, int rn, string cn, char div, string d, string bg, string ca, string pn, string dl) {
        name = n;
        rollNumber = rn;
        className = cn;
        division = div;
        dob = d;
        bloodGroup = bg;
        contactAddress = ca;
        phoneNumber = pn;
        drivingLicense = dl;
    }

    Student(const Student& other) {
        name = other.name;
        rollNumber = other.rollNumber;
        className = other.className;
        division = other.division;
        dob = other.dob;
        bloodGroup = other.bloodGroup;
        contactAddress = other.contactAddress;
        phoneNumber = other.phoneNumber;
        drivingLicense = other.drivingLicense;
    }

    ~Student() {
        cout << "Destructor called for student " << name << endl;
    }

    static void printStudent(const Student& student) {
        cout << "Name: " << student.name <<endl;
        cout << "Roll Number: " << student.rollNumber <<endl;
        cout << "Class: " << student.className <<endl;
        cout << "Division: " << student.division <<endl;
        cout << "Date of Birth: " << student.dob <<endl;
        cout << "Blood Group: " << student.bloodGroup <<endl;
        cout << "Contact Address: " << student.contactAddress <<endl;
        cout << "Phone Number: " << student.phoneNumber <<endl;
        cout << "Driving License: " << student.drivingLicense <<endl;
    }
};

int main() {
    Student student1("John Doe", 12345, "Class 10", 'A', "01/01/2000", "B+", "123 Main St", "555-123-4567", "DL12345");

    Student student2 = student1;

    Student::printStudent(student1);
    Student::printStudent(student2);

    Student* student3 = new Student("Alice Smith", 67890, "Class 12", 'B', "05/05/2002", "O-", "456 Elm St", "555-987-6543", "DL67890");

    delete student3;

    return 0;
}
