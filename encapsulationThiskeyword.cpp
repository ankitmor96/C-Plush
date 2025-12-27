/*#include<iostream>
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

}*/




#include<iostream>
#include<string>

using namespace std;

class College{
    private:
        int college_id;
        string college_name;
        string college_address;
        string college_email;
        string college_phone;
        string college_website;

    public:
        void setCollegeDetails(int id, string name,string address,string email,string phone,string website)
        {
            this->college_id=id;
            this->college_name=name;
            this->college_address=address;
            this->college_email=email;
            this->college_phone=phone;
            this->college_website=website;

        }
        void getCollegeDetails(){

            cout<<"college details are"<<endl;

            cout<<"id: "<<college_id<<endl;
            cout<<"name: "<<college_name<<endl;
            cout<<"address: "<<college_address<<endl;
            cout<<"email: "<<college_email<<endl;
            cout<<"phone: "<<college_phone<<endl;
            cout<<"website: "<<college_website<<endl;
        }
};
int main()
{
     College c[5];

     int id;
     string name;
     string address;
     string email;
     string phone;
     string website;

     for( int i=0;i<5;i++){;
        cout<<"enter college Details"<< i+1 <<endl;
        
        cout<<"enter id:"<<endl;
        cin>>id;
        cin.ignore();

        cout<<"enter name:"<<endl;
        cin>>name;
        getline(cin,name);

        cout<<"enter address:"<<endl;
        cin>>address;
        getline(cin,address);

        cout<<"enter email:"<<endl;
        cin>>email;
        getline(cin,email);

        cout<<"enter phone:"<<endl;
        cin>>phone;
        getline(cin,phone);

        cout<<"enter website:"<<endl;
        cin>>website;
        getline(cin,website);

        c[i].setCollegeDetails(id,name,address,email,phone,website);
     }

     cout<<"College Detail are:"<<endl;
     for(int i=0;i<5;i++){
        c[i].getCollegeDetails();
     };

     return 0;
}