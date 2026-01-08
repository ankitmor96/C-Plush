#include <iostream>
#include <string>
using namespace std;

class Emp {
protected:
    int id;
    string name;
    double salary;

public:
    void setEmp(int i, string n, double s) {
        id = i;
        name = n;
        salary = s;
    }

    virtual void display() {
        cout << "Employee ID     : " << id << endl;
        cout << "Employee Name   : " << name << endl;
        cout << "Employee Salary : " << salary << endl;
    }

    virtual ~Emp() {
        cout << "\nEmployee Object Destroyed\n";
    }
};

class FrontEndEmp : public Emp {
    int bonus;

public:
    void setFrontEndEmp(int i, int b, string n, double s) {
        setEmp(i, n, s);   
        bonus = b;
    }

    void display() override {
        Emp::display();
        cout << "Bonus           : " << bonus << endl;
        cout << "Type            : Front End Developer\n";
      
    }
};

class BackEndEmp : public Emp {
    int bonus;

public:
    void setBackEndEmp(int i, int b, string n, double s) {
        setEmp(i, n, s);   
        bonus = b;
    }

    void display() override {
        Emp::display();
        cout << "Bonus           : " << bonus << endl;
        cout << "Type            : Back End Developer\n";
        
    }
};

int main() {
    Emp* employees[5];
    int count = 0;
    int choice;

    do {
        cout << "\n------ Employee Management System ------\n";
        cout << "1. Add Front End Developer\n";
        cout << "2. Add Back End Developer\n";
        cout << "3. Display Employees\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1 && count < 5) {
            FrontEndEmp* F = new FrontEndEmp();
            int id, bonus;
            string name;
            double salary;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Bonus: ";
            cin >> bonus;

            F->setFrontEndEmp(id, bonus, name, salary);
            employees[count++] = F;
        }
        else if (choice == 2 && count < 5) {
            BackEndEmp* B = new BackEndEmp();
            int id, bonus;
            string name;
            double salary;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Bonus: ";
            cin >> bonus;

            B->setBackEndEmp(id, bonus, name, salary);
            employees[count++] = B;
        }
        else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                employees[i]->display();
            }
        }
        else if (choice == 4) {
            if (count > 0) {
                delete employees[count - 1]; 
                count--;
                cout << "Employee Deleted Successfully\n";
            } else {
                cout << "No Employee to Delete\n";
            }
        }

    } while (choice != 5);

    for (int i = 0; i < count; i++) {
        delete employees[i];
    }

    return 0;
}
