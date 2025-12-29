#include<iostream>
using namespace std;

class Student {
protected:
    int id;

    void displayId() {
        cout << "ID: " << id << endl;
    }
};

class Exam : public Student {
protected:
    int marks;

public:
    void setId(int i) {
        id = i;
    }

    void setMarks(int m) {
        marks = m;
    }

    void showDetails() {
        displayId();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Exam ad;
    ad.setId(101);
    ad.setMarks(85);
    ad.showDetails();

    return 0;
}
