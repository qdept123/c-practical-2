#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    // Constructor
    Employee(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for " << name << endl;
    }

    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee e1(101, "dog");
    Employee e2(102, "pig");

    e1.show();
    e2.show();

    return 0;
}
