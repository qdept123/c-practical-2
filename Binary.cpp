#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Arithmetic +
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Comparison ==
    bool operator==(const Complex &c) {
        return (real == c.real && imag == c.imag);
    }

    // Assignment =
    Complex& operator=(const Complex &c) {
        if (this != &c) {
            real = c.real;
            imag = c.imag;
        }
        return *this;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex a(2, 3), b(4, 5), c;

    c = a + b;
    cout << "a + b = ";
    c.display();

    Complex d = c;
    cout << "Copy d = c: ";
    d.display();

    cout << "a == b? " << (a == b ? "Yes" : "No") << endl;

    return 0;
}
