#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student {
    private:

    int stu_Roll;
    float stu_GPA;
    string stu_name;


    public:
    Student(){
        stu_Roll=0;
        stu_GPA=0;
        stu_name="not set";

        cout<<"This is Default Constructor:"<<endl;
    }

    Student(int R,float G,string n){

      stu_Roll=R;
      stu_GPA=G;
      stu_name=n;

      cout<<"This is Parameterized Constructor:"<<endl;

    }
    Student(const Student &s){

        stu_Roll=s.stu_Roll;
        stu_GPA=s.stu_GPA;
        stu_name=s.stu_name;

        cout<<"This is Copy Constructor:"<<endl;

    }

     int getstu_Roll() const
     {
        return stu_Roll;
     };
     float getstu_GPA() const
     {
        return stu_GPA;
     };
     string getstu_name() const 
     {
        return stu_name;
     };

     void display() const
     {
        cout<<" stu Roll:"<<stu_Roll  <<"stu GPA:"<<stu_GPA  <<"stu name:"<<stu_name  <<endl;
     }

     ~Student()
     {
        cout<<" This is Destucture to called object destroy:"<<endl;
     }
};

class StudentDetailsManagement
 {
    private:
    vector<Student>students;


    public:

      void addStudent (const Student &s)
      {
        students.push_back(s);
        cout<<" student data add :"<<endl;
      }

      void displayAllData()
      {
        cout<<"All student details are:"<<endl;

        if(students.empty())
        {
            cout<<"Not Available in student details:"<<endl;
        }
        else{
            for(int i=0;students.size();i++)
            students[i].display();
        }
      }

      void searchbyRollNumber(int stu_Roll) const
      {
          for(int i=0;i<students.size();i++){
             if(students[i].getstu_Roll()==stu_Roll)
             {
                cout<<" RollNumber is found :"<<endl;
                students[i].display();

                return ;
             }
             cout<<"\n please sorry RollNumber is:"<<stu_Roll<<" not found:"<<endl;
          }
      }
 };
 int main(){
  
     Student s1(1,2.5,"ankit");
     Student s2(2,3.1,"amit");
     Student s3(3,2.8,"kaloesh");

     StudentDetailsManagement manager;

     manager.addStudent(s1);
     manager.addStudent(s2);
     manager.addStudent(s3);
     
     manager.displayAllData();

     manager.searchbyRollNumber(3);

     return 0;

 }
