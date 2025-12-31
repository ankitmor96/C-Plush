#include<iostream>

using namespace std;

class Cafe{

    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_Quality;

public:
  
  Cafe(){
    cafe_id=0;
    cafe_name=" not set";
    cafe_type="not set";
    cafe_rating=0;
    cafe_location="not set";
    cafe_establish_year=0;
    cafe_staff_Quality=0;
   
  }
  void getData(){

    cout<<"\n enter cafe id                   :"<<endl;
    cin>>cafe_id;

    cout<<"\n enter cafe name                 :"<<endl;
    cin>>cafe_name;

    cout<<"\n enter cafe type                 :"<<endl;
    cin>>cafe_type;

    cout<<"\n enter cafe rating               :"<<endl;
    cin>>cafe_rating;

    cout<<"\n enter cafe location             :"<<endl;
    cin>>cafe_location;

    cout<<"\n enter cafe establish year       :"<<endl;
    cin>>cafe_establish_year;
    
    cout<<"\n enter cafe staff Quality        :"<<endl;
    cin>>cafe_staff_Quality;
  }
  void Display(){
    cout<<"\n cafe id                          :"<<cafe_id;
    cout<<"\n cafe name                        :"<<cafe_name;
    cout<<"\n cafe type                        :"<<cafe_type;
    cout<<"\n cafe rating                      :"<<cafe_rating;
    cout<<"\n cafe location                    :"<<cafe_location;
    cout<<"\n cafe establish year              :"<<cafe_establish_year;
        
  }
};
int main(){
    int n;
    cout<<"\n enter number of cafe Details:"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
       
        
        Cafe c1;
        c1.getData();
        c1.Display();

    }
    return 0;
}
