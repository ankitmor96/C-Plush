#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Hotel
{

private:
    int hotel_id;
    string hotel_name;
    float hotel_rating;
    int hotel_room_Quantity;

public: // default constructor:-(value=0)
    Hotel()
    {
        hotel_id = 0;
        hotel_name = "not set";
        hotel_rating = 0;
        hotel_room_Quantity = 0;

        cout << " This is Default Constructor :" << endl;
    }

    // Parameterized Constructor:-(define variable )

    Hotel(int i, string n, float r, int rq)
    {
        hotel_id = i;
        hotel_name = n;
        hotel_rating = r;
        hotel_room_Quantity = rq;

        cout << " This is Parameterized Constructor:" << endl;
    }

    // copy Constructor :-

    Hotel(const Hotel &h)
    {
        hotel_id = h.hotel_id;
        hotel_name = h.hotel_name;
        hotel_rating = h.hotel_rating;
        hotel_room_Quantity = h.hotel_room_Quantity;

        cout << " This is copy Constructor:" << endl;
    }

    // getter method :-

    int getHotel_id() const
    {
        return hotel_id;
    };
    string getHotel_name() const
    {
        return hotel_name;
    };
    int getHotel_rating() const
    {
        return hotel_rating;
    };
    int getHotel_room_Quantity() const
    {
        return hotel_room_Quantity;
    };

    void display() const
    {
        cout << "hotel id:" << hotel_id << "hotel name:" << hotel_name << "hotel rating:" << hotel_rating
             << "hotel room Quantity" << hotel_room_Quantity << endl;
    }
    // Destructure :-

    ~Hotel()
    {
        cout << " This is Destructure called object destroy" << endl;
    }
};

class HotelDetailsManagement
{
private:
    vector<Hotel> hotels;

public:
    void addHotel(const Hotel &h)
    {

        hotels.push_back(h);
        cout << "hotel Data added";
    }

    void displayAllData()
    {
        cout << " All hotel Details are:" << endl;

        if (hotels.empty())
        {
            cout << " No hotel Details Available" << endl;
        }
        else
        {
            for (int i = 0; i < hotels.size(); i++)
            {
                hotels[i].display();
            }
        }
    }

    void searchbyidnumber(int hotel_id) const
    {
        for (int i = 0; i < hotels.size(); i++)
        {
            if (hotels[i].getHotel_id() == hotel_id)
            {
                cout << "\n Hotel id is Found ";
                hotels[i].display();

                return;
            }
        }
        cout << "\n Hotel id is  :" << hotel_id << " Not Found " << endl;
    }
};
int main()
{

    Hotel h1(101, "Red", 2.1, 10);
    Hotel h2(102, "Shiva", 3.7, 12);
    Hotel h3(103, "Lion", 2.9, 8);

    HotelDetailsManagement manager;

    manager.addHotel(h1);
    manager.addHotel(h2);
    manager.addHotel(h3);

    manager.displayAllData();

    manager.searchbyidnumber(102);

    return 0;
}