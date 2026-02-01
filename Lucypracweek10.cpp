#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string firstName, lastName;
    char initial;

public:
    Employee(string f, char i, string l)
        : firstName(f), initial(i), lastName(l) {}
    
    virtual double earnings() = 0;
    
    virtual void display() {
        cout << firstName << " " << initial << ". " << lastName << endl;
    }
};

class SalaryEmployee : public Employee {
private:
    double monthlySalary;

public:
    SalaryEmployee(string f, char i, string l, double s)
        : Employee(f, i, l), monthlySalary(s) {}
    
    double earnings() {
        return monthlySalary;
    }
};

class HourlyEmployee : public Employee {
private:
    double hours, rate;

public:
    HourlyEmployee(string f, char i, string l, double h, double r)
        : Employee(f, i, l), hours(h), rate(r) {}
    
    double earnings() {
        return hours * rate;
    }
};

int main() {
    Employee *e1 = new SalaryEmployee("John", 'K', "Doe", 60000);
    Employee *e2 = new HourlyEmployee("Mary", 'A', "Jane", 160, 500);
    
    e1->display();
    cout << "Earnings: " << e1->earnings() << endl;
    
    e2->display();
    cout << "Earnings: " << e2->earnings() << endl;
    
    delete e1;
    delete e2;
    
    return 0;
}
