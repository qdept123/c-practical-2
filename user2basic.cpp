#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m = 0) {
        meters = m;
    }

    // Type conversion operator: user-defined to basic
    operator int() {
        return meters;
    }
};

int main() {
    Distance d(250);

    // user-defined to basic
    int m = d;

    cout << "Distance in meters: " << m << endl;

    return 0;
}
