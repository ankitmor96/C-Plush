#include <iostream>
using namespace std;

class Hotel {
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
   
    static string country;

  
    void setData() {
        cout << "\nEnter Hotel ID: ";
        cin >> hotel_id;

        cout << "Enter Hotel Name: ";
        cin >> hotel_name;

        cout << "Enter Hotel Type (Hotel/Motel): ";
        cin >> hotel_type;

        cout << "Enter Hotel Rating (1 to 7): ";
        cin >> hotel_rating;

        cout << "Enter Hotel Location (City): ";
        cin >> hotel_location;

        cout << "Enter Establish Year: ";
        cin >> hotel_establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Room Quantity: ";
        cin >> hotel_room_quantity;
    }

    
    void getData() {
        cout << "\nHotel ID: " << hotel_id;
        cout << "\nHotel Name: " << hotel_name;
        cout << "\nHotel Type: " << hotel_type;
        cout << "\nHotel Rating: " << hotel_rating << " Star";
        cout << "\nHotel Location: " << hotel_location;
        cout << "\nEstablish Year: " << hotel_establish_year;
        cout << "\nStaff Quantity: " << hotel_staff_quantity;
        cout << "\nRoom Quantity: " << hotel_room_quantity;
        cout << "\nCountry: " << country << endl;
    }
};


string Hotel::country = "India";

int main() {
    int n;
    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel h[n];   

   
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter Address of Hotel " << i + 1 << " ---";
        h[i].setData();
    }

    
    for (int i = 0; i < n; i++) {
        cout << "\n--- Hotel " << i + 1 << " Details ---";
        h[i].getData();
    }

    return 0;
}


