#include<iostream>
using namespace std;

class Student{

    private:
        int stu_id;
        string stu_name;
        int stu_age;
        int stu_marks;
        string stu_address;

    public:
    Student(int id,string name,int age,int marks,string address) //p.c
    {
        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_marks = marks;
        stu_address = address;
    }
    void Display(){
        cout<<"\n Student id        :"<<stu_id;
        cout<<"\n Student Name      :"<<stu_name;
        cout<<"\n Student Age       :"<<stu_age;
        cout<<"\n Student Marks     :"<<stu_marks;
        cout<<"\n Student Address   :"<<stu_address<<endl;
    }

    ~Student(){
        cout<<"\nDestructor called for Student id:"<<endl;
    }
    };
    int main(){
         int n;
         cout<<"enter number of student Details:";
         cin>>n;

         for(int i=0;i<n;i++){
            int id, age,marks;
            string name,address;

            

            cout<<"enter Student id       :"<<endl;
            cin>>id;

            cout<<"enter Student name     :"<<endl;
            cin>>name;

            cout<<"enter Student age       :"<<endl;
            cin>>age;

            cout<<"enter Student marks     :"<<endl;
            cin>>marks;

            cout<<"enter Student address   :"<<endl;
            cin>>address;

           Student s1(id,name,age,marks,address);
           s1.Display();

         }
         return 0;
    }
    


