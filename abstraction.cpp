#include<iostream>
using namespace std;

class Student{
    public:
  virtual void read() = 0;

    
};
class book: public Student{
    public:
    void read(){
        cout<<"indian costitution"<<endl;
    }
};
int main(){
    book b1;
    b1.read();

    return 0;
}

