#include<iostream>
using namespace std;

class Hotel
{
    private:
        int hotel_id;
        string hotel_name;
        string hotel_type;
        int hotel_rating;
        string hotel_address;
        int hotel_establish_year;
        int hotel_staff_quantity;
        int hotel_room_quantity;

        public:

        static string state;

        void setData()
        {

            cout<<"\n entear hotel id:";
            cin>>hotel_id;
            cout<<"\n enter hotel name:";
            cin>>hotel_name;
            cout<<"\n enter hotel type:";
            cin>>hotel_type;
            cout<<"\n enter hotel rating:";
            cin>>hotel_rating;
            cout<<"\n enter hotel address:";
            cin>>hotel_address;
            cout<<"\n enter hotel establish year:";
            cin>>hotel_establish_year;
            cout<<"\n enter hotel staff quantity:";
            cin>>hotel_staff_quantity;
            cout<<"\n enter hotel room quantity:";
            cin>>hotel_room_quantity;
        }

        void getData()
        {
            cout<<"\n hotel id=id;"<<hotel_id;
            cout<<"\n hotel name=name;"<<hotel_name;
            cout<<"\n hotel type=type;"<<hotel_type;
            cout<<"\n hotel rating=rating;"<<hotel_rating;
            cout<<"\n hotel address=address;"<<hotel_address;
            cout<<"\n hotel establish year=establish year;"<<hotel_establish_year;
            cout<<"\n hotel staff quantity=staff quantity;"<<hotel_staff_quantity;
            cout<<"\n hotel room quantity=room quantity;"<<hotel_room_quantity;
            cout<<"\n state:"<<state<<endl;
        }
};

string Hotel::state="gujarat";

int main()
{
    int n;
    cout<<"\n enter hotel number of hotels:";

    cin>>n;

    Hotel h[n];

    for(int i=0; i<n; i++)
    {
        cout<<"\n enter hotel address:"<<i+1<<"-----";
        h[i].setData();
    }
    for(int i=0; i<n; i++)
    {
        cout<<"\n hotel details:"<<i+1<<"-----";
        h[i].getData();
    }
   

}
