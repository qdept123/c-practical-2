#include <iostream>
using namespace std;

class A {
public:
    int x = 20;
protected:
    int y = 30;
private:
    int z = 40;
};

class B : public A {
public:  // Added public access specifier for Display()
    void Display() {
        cout << "The value of x=" << x << endl;    // Accessible (public inheritance)
        cout << "The value of y=" << y << endl;    // Accessible (protected in base)
        // cout << "The value of z=" << z << endl; // Not accessible (private in base)
    }
};

class C : private A {
public:  // Added public access specifier for Display()
    void Display() {
        cout << "The value of x=" << x << endl;    // Accessible (now private in C)
        cout << "The value of y=" << y << endl;    // Accessible (now private in C)
        // cout << "The value of z=" << z << endl; // Not accessible (private in base)
    }
};

class D : protected A {
public:  // Added public access specifier for Display()
    void Display() {
        cout << "The value of x=" << x << endl;    // Accessible (now protected in D)
        cout << "The value of y=" << y << endl;    // Accessible (protected in base)
        // cout << "The value of z=" << z << endl; // Not accessible (private in base)
    }
};

int main() {
    B b;
    cout << "Class B (public inheritance):" << endl;
    b.Display();
    cout << "Accessing x from main: " << b.x << endl;  // Accessible (public)
    // cout << b.y << endl;  // Not accessible (protected)
    
    C c;
    cout << "\nClass C (private inheritance):" << endl;
    c.Display();
    // cout << c.x << endl;  // Not accessible (private in C)
    
    D d;
    cout << "\nClass D (protected inheritance):" << endl;
    d.Display();
    // cout << d.x << endl;  // Not accessible (protected in D)
    
    return 0;
}