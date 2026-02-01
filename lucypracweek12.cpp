#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Course class (Association)
class Course {
private:
    string courseCode;
    string courseName;

public:
    Course(string code, string name) {
        courseCode = code;
        courseName = name;
    }

    string getCourseName() {
        return courseName;
    }
};

// Student class (Association with Course)
class Student {
private:
    string studentId;
    string name;
    vector<Course*> courses;

public:
    Student(string id, string n) {
        studentId = id;
        name = n;
    }

    void registerCourse(Course* course) {
        courses.push_back(course);
        cout << name << " registered for " << course->getCourseName() << endl;
    }

    string getName() {
        return name;
    }
};

// PaymentService class (Dependency)
class PaymentService {
public:
    void processPayment(Student* student) {
        cout << "Payment processed for " << student->getName() << endl;
    }
};

// RegistrationSystem class (Uses PaymentService → Dependency)
class RegistrationSystem {
public:
    void registerStudent(Student* student, Course* course) {
        PaymentService payment; // Dependency
        payment.processPayment(student);
        student->registerCourse(course);
        cout << "Registration successful." << endl;
    }
};

// Main function
int main() {
    Student student("S001", "Lucy");
    Course course("CS101", "Object Oriented Programming");

    RegistrationSystem system;
    system.registerStudent(&student, &course);

    return 0;
}
