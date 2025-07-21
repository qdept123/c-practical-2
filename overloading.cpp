#include <iostream>
using namespace std;

class Animal {
public:
    // Base class function
    virtual void speak() {
        cout << "The animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the base class function
    void speak() override {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the base class function
    void speak() override {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Animal a;
    Dog d;
    Cat c;

    Animal* ptr;

    ptr = &a;
    ptr->speak(); // Calls Animal::speak()

    ptr = &d;
    ptr->speak(); // Calls Dog::speak()

    ptr = &c;
    ptr->speak(); // Calls Cat::speak()

    return 0;
}
