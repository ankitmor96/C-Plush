#include <iostream>
using namespace std;

class Student {

   public:
        int ankit;

   public:
    void setdata(int n) {  

        ankit=n;
       
    }
    void getdata() { 
        cout << "ankit age is: " << ankit << endl;
    }
};
int main(){

    Student s1;

    s1.setdata(20);
    s1.getdata();

    return 0;
}