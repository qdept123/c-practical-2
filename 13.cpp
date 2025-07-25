#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    // Default constructor
    Employee() {
        id = 0;
        name = "rajat";
    }

    // Parameterized constructor
    Employee(int i, string n) {
        id = i;
        name = n;
    }

    // Copy constructor
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
    }

    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee e1;                        // Default
    Employee e2(101, "karki");         // Parameterized
    Employee e3(e2);                   // Copy

    e1.show();
    e2.show();
    e3.show();

    return 0;
}
