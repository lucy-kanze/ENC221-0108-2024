#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    Employee() {
        name = "";
        age = 0;
        serviceYear = 0;
        salary = 0.0;
    }
    
    Employee(string n, int a, int s, double sal) {
        name = n;
        age = a;
        serviceYear = s;
        salary = sal;
    }
    
    string getName() { return name; }
    int getAge() { return age; }
    int getServiceYear() { return serviceYear; }
    double getSalary() { return salary; }
};

int main() {
    Employee emp("Lucy", 21, 2, 45000);
    
    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Service Years: " << emp.getServiceYear() << endl;
    cout << "Salary: " << emp.getSalary() << endl;
    
    return 0;
}
