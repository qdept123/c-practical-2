#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    Employee(int i) { id = i; }
    void show() { cout << "ID: " << id << endl; }
};

void byValue(Employee e)
{ cout << "[Value] "; 
    e.show(); }
void byRef(Employee &e)     
 { cout << "[Ref]   "; 
    e.show(); }
void byPtr(Employee *e)    
  { cout << "[Ptr]   ";
     e->show(); }

int main() {
    Employee e(101);
    byValue(e);
    byRef(e);
    byPtr(&e);
    return 0;
}
