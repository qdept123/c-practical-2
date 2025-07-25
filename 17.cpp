#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    Employee(int i) : id(i) {}
    void show() { cout << "ID: " << id << endl; }
};

// (a) Return object as reference
Employee& returnByRef(Employee &e) {
    return e;
}

// (b) Return object as pointer
Employee* returnByPtr(Employee *e) {
    return e;
}

int main() {
    Employee e1(101);

    Employee &ref = returnByRef(e1);
    cout << "Returned by reference: ";
    ref.show();

    Employee *ptr = returnByPtr(&e1);
    cout << "Returned by pointer: ";
    ptr->show();

    return 0;
}
