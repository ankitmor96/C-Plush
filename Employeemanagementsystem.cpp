#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int emp_id;
    string name;
    int age;
    double salary;

public:
    void setEmployee(int i, string n, int a, double s) {
        emp_id = i;
        name = n;
        age = a;
        salary = s;
    }

    virtual void display() {
        cout << "\nEmployee ID : " << emp_id;
        cout << "\nName        : " << name;
        cout << "\nAge         : " << age;
        cout << "\nSalary      : " << salary;
    }

    virtual ~Employee() {
        cout << "\nEmployee memory freed.";
    }
};

class FullTimeEmployee : public Employee {
    int bonus;

public:
    void setFullTimeEmployee(int i, int b, string n, int a, double s) {
        setEmployee(i, n, a, s);
        bonus = b;
    }

    void display() override {
        Employee::display();
        cout << "\nBonus       : " << bonus;
        cout << "\nType        : Full Time Employee";
    }
};

class PartTimeEmployee : public Employee {
    float hours;

public:
    void setPartTimeEmployee(int i, int h, int a, string n, double s) {
        setEmployee(i, n, a, s);
        hours = h;
    }

    void display() override {
        Employee::display();
        cout << "\nHours Worked: " << hours;
        cout << "\nType        : Part Time Employee";
    }
};

int main() {
    Employee* employees[10];
    int count = 0;
    int choice;

    do {
        cout << "\nEmployee Management System";
        cout << "\n1. Add Full Time Employee";
        cout << "\n2. Add Part Time Employee";
        cout << "\n3. Display Employees";
        cout << "\n4. Delete Last Employee";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1 && count < 10) {
            FullTimeEmployee* f = new FullTimeEmployee();
            int id, age, bonus;
            double salary;
            string name;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Bonus: ";
            cin >> bonus;

            f->setFullTimeEmployee(id, bonus, name, age, salary);
            employees[count++] = f;
        }

        else if (choice == 2 && count < 10) {
            PartTimeEmployee* p = new PartTimeEmployee();
            int id, age, hours;
            double salary;
            string name;

            cout << "Enter ID: "<<endl;
            cin >> id;
            cout << "Enter Name: "<<endl;
            cin >> name;
            cout << "Enter Age: "<<endl;
            cin >> age;
            cout << "Enter Salary: "<<endl;
            cin >> salary;
            cout << "Enter Hours Worked: "<<endl;
            cin >> hours;

            p->setPartTimeEmployee(id, hours, age, name, salary);
            employees[count++] = p;
        }

        else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                employees[i]->display();
                cout << "\n";
            }
        }

        else if (choice == 4) {
            if (count > 0) {
                delete employees[count];
                cout << "Employee deleted successfully."<<endl;
            } else {
                cout << "No employee to delete."<<endl;
            }
        }

    } while (choice != 5);

    for (int i = 0; i < count; i++) {
        delete employees[i];
    }

    return 0;
}
