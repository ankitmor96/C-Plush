#include<iostream>
using namespace std;

class Hotel{
    private:

    int Hotel_id;
    string Hotel_name;
    int Hotel_room_Quantity;
    string Hotel_location;
    int Hotel_staff_Quantity;


    public:

    Hotel(){

        Hotel_id=0;
        Hotel_name="not set";
        Hotel_room_Quantity=0;
        Hotel_location="not set";
        Hotel_staff_Quantity=0;

    }
    void getData(){

        cout<<"\n enter Hotel id                        : "<<endl;
        cin>>Hotel_id;

        cout<<"\n enter Hotel name                      : "<<endl;
        cin>>Hotel_name;

        cout<<"\n enter Hotel room Quantity             : "<<endl;
        cin>>Hotel_room_Quantity;

        cout<<"\n enter Hotel location                  : "<<endl;
        cin>>Hotel_location;

        cout<<"\n enter Hotel staff Quantity            : "<<endl;
        cin>>Hotel_staff_Quantity;

    }

    void Display(){

        cout<<"\n Hotel id                                :"<<Hotel_id;
        cout<<"\n Hotel name                              :"<<Hotel_name;
        cout<<"\n Hotel room Quantity                     :"<<Hotel_room_Quantity;
        cout<<"\n Hotel location                          :"<<Hotel_location;
        cout<<"\n Hotel staff Quantity                    :"<<Hotel_staff_Quantity;

    }

    ~Hotel(){
        cout<<"\n Destructor called Hotel name:"<<endl;
    }

};

int main(){
    int n;
    cout<<"\n Enter number of Hotel Details:"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){

        Hotel H1;
        H1.getData();
        H1.Display();
    }
     
    return 0;

}