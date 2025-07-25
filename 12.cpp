#include <iostream>
#include <string>
using namespace std;

// Employee class definition
class Employee {
private:
    int empId;
    string name;
    double salary;

public:
    // Member function to set employee data
    void setEmployeeData(int id, string empName, double empSalary) {
        empId = id;
        name = empName;
        salary = empSalary;
    }

    // Member function to display employee data
    void displayEmployeeData() {
        cout << "Employee ID   : " << empId << endl;
        cout << "Name          : " << name << endl;
        cout << "Salary        : $" << salary << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    // Create three Employee objects
    Employee emp1, emp2, emp3;

    // Set data for each employee
    emp1.setEmployeeData(101, "dog", 55000.50);
    emp2.setEmployeeData(102, "salman khan", 60000.00);
    emp3.setEmployeeData(103, "pig", 52000.75);

    // Display data for each employee
    cout << "Employee Details:\n";
    cout << "---------------------------" << endl;
    emp1.displayEmployeeData();
    emp2.displayEmployeeData();
    emp3.displayEmployeeData();

    return 0;
}
