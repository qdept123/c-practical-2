#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    // Default Constructor
    Employee() {
        id = 0;
        name = "dog";
    }

    // Constructor with one parameter
    Employee(int i) {
        id = i;
        name = "pig";
    }

    // Constructor with two parameters
    Employee(int i, string n) {
        id = i;
        name = n;
    }

    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee e1;                     // Default constructor
    Employee e2(101);                // One parameter
    Employee e3(102, "batman");       // Two parameters

    e1.show();
    e2.show();
    e3.show();

    return 0;
}
