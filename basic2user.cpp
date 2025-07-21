#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    // Constructor for basic to user-defined conversion
    Distance(int m) {
        meters = m;
    }

    void display() {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    int m = 100;

    // basic to user-defined
    Distance d = m;

    d.display();

    return 0;
}
