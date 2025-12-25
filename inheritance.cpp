#include <iostream>
using namespace std;


class Student {
public:
    void read() {
        cout << "indian constitution" << endl;
    }
};

class book : public Student {
public:
    void write() {
        cout << "assingment" << endl;
    }
};

int main() {
    book b1;

    b1.read();   
    b1.write();  

    return 0;
}