#include<iostream>
using namespace std;

class Student{
    private:
      int stu_id;
      string stu_name;
      int stu_age;
      string stu_course;
      string stu_department;
      string stu_university;
      string stu_email;
      string stu_phone;
      string stu_address;

      public:
      void setStudentDetail( int id,string name,int age,string course,string department,string university,string email,string phone,string address)
      {
         this->stu_id=id;
         this->stu_age=age;
         this->stu_name=name;
         this->stu_course=course;
         this->stu_department=department;
         this->stu_university=university;
         this->stu_email=email;
         this->stu_phone=phone;
         this->stu_address=address;
      }
      
      void getStudentDetail(){
        cout << "student details:"<<endl;

        cout<<"id:"<<stu_id<<endl;
        cout<<"name:"<<stu_name<<endl;
        cout<<"age:"<<stu_age<<endl;
        cout<<"course:"<<stu_course<<endl;  
        cout<<"department:"<<stu_department<<endl;
        cout<<"university:"<<stu_university<<endl;
        cout<<"email:"<<stu_email<<endl;
        cout<<"phone:"<<stu_phone<<endl;
        cout<<"address:"<<stu_address<<endl;
}
};
int main(){

      Student s1;

      int id=101;
      string name="John Doe";
      int age=20;
      string course="Computer Science";
      string department="Engineering";
      string university="ABC University";
      string email="john.doe@example.com";
      string phone="1234567890";
      string address="123 Main Street";

     s1.setStudentDetail(id,name,age,course,department,university,email,phone,address);
     s1.getStudentDetail();

     return 0;

}