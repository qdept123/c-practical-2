#include <iostream>
using namespace std;

// Class representing Celsius temperature
class Celsius {
    float celsius;
public:
    Celsius(float c = 0) {
        celsius = c;
    }

    float getCelsius() const {
        return celsius;
    }
};

// Class representing Fahrenheit temperature
class Fahrenheit {
    float fahrenheit;
public:
    Fahrenheit(float f = 0) {
        fahrenheit = f;
    }

    // Constructor for converting Celsius to Fahrenheit
    Fahrenheit(const Celsius &c) {
        fahrenheit = (c.getCelsius() * 9.0 / 5) + 32;
    }

    void display() {
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    }
};

int main() {
    Celsius c(25);              // 25°C
    Fahrenheit f = c;           // user-defined to user-defined

    f.display();

    return 0;
}
