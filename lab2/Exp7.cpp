#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    double salary;
    double &newSalary;

public:
    Employee(double s) : salary(s), newSalary(salary) {}

    void updateByReference() {
        newSalary = newSalary + (newSalary * 0.10);
    }

    void updateByPointer() {
        double *ptr = &salary;
        *ptr = *ptr + (*ptr * 0.10);
    }

    double getSalary() {
        return salary;
    }
};

int main() {

    Employee emp1(50000);

    emp1.updateByReference();

    cout << "Salary after reference update: "<< emp1.getSalary() << endl;

    Employee emp2(50000);

    emp2.updateByPointer();

    cout << "Salary after pointer update: "<< emp2.getSalary() << endl;
    return 0;
}