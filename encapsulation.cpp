#include <iostream>
using namespace std;

class Student {

   private:
        int num;

   public:
    void setdata(int n) {  

        num=n;
       
    }
    void getdata() { 
        cout << "num is: " << num << endl;
    }
};
int main(){

    Student s1;

    s1.setdata(55);
    s1.getdata();

    return 0;
}
