#include<iostream>
using namespace std;

class Student{
    private:
    
    public:
    void read(){
        cout<<"indian geography"<<endl;
    }
};
class book:
public Student{
    public:
    void write(){
        cout<<"project work"<<endl;
    }
};
int main(){
    book b1;

    b1.read();
    b1.write();

    return 0;
}