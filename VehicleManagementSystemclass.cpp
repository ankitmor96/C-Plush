#include <iostream>
#include <vector>
#include <string>
using namespace std;



class Vehicle {
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

public:
    static int totalVehicles;

    Vehicle() {
        vehicleID = 0;
        manufacturer = "Not Set";  // default
        model = "Not Set";
        year = 0;
        totalVehicles++;
    }

    Vehicle(int id, string m, string md, int y) {
        vehicleID = id;     // parameterized
        manufacturer = m;
        model = md;
        year = y;
        totalVehicles++;
    }

    virtual void display() {
        cout << "Vehicle ID     : " << vehicleID << endl;
        cout << "Manufacturer   : " << manufacturer << endl;  //setter
        cout << "Model          : " << model << endl;
        cout << "Year           : " << year << endl;
    }

    int getID() {
        return vehicleID;  // getter
    }

    virtual ~Vehicle() {}   // destructure
};

int Vehicle::totalVehicles = 0;



class Car : public Vehicle {
protected:
    string fuelType;

public:
    Car(int id, string m, string md, int y, string fuel): Vehicle(id, m, md, y) {
        fuelType = fuel;
    }

    void display() override {
        Vehicle::display();
        cout << "Fuel Type      : " << fuelType << endl;
    }
};



class ElectricCar : public Car {
protected:
    int batteryCapacity;

public:
    ElectricCar(int id, string m, string md, int y, int battery): Car(id, m, md, y, "Electric") {
        batteryCapacity = battery;
    }

    void display() override {
        Car::display();
        cout << "Battery (kWh)  : " << batteryCapacity << endl;
    }
};



class Aircraft {
protected:
    int flightRange;

public:
    Aircraft(int range) {
        flightRange = range;
    }

    void showAircraft() {
        cout << "Flight Range   : " << flightRange << " km" << endl;
    }
};



class FlyingCar : public ElectricCar, public Aircraft {
public:
    FlyingCar(int id, string m, string md, int y, int battery, int range): ElectricCar(id, m, md, y, battery),
          Aircraft(range) {}

    void display() {
        ElectricCar::display();
        showAircraft();
    }
};



class SportsCar : public ElectricCar {
    int topSpeed;

public:
    SportsCar(int id, string m, string md, int y, int battery, int speed): ElectricCar(id, m, md, y, battery) {
        topSpeed = speed;
    }

    void display() override {
        ElectricCar::display();
        cout << "Top Speed      : " << topSpeed << " km/h" << endl;
    }
};



class Sedan : public Car {
public:
    Sedan(int id, string m, string md, int y, string fuel): Car(id, m, md, y, fuel) {}

    void display() override {
        Car::display();
        cout << "Car Type       : Sedan" << endl;
    }
};



class SUV : public Car {
public:
    SUV(int id, string m, string md, int y, string fuel): Car(id, m, md, y, fuel) {}

    void display() override {
        Car::display();
        cout << "Car Type       : SUV" << endl;
    }
};



class VehicleRegistry {
    vector<Vehicle*> vehicles;

public:
    void addVehicle(Vehicle* v) {   // add data 
        vehicles.push_back(v);
    }

    void displayAll() {
        if (vehicles.empty()) {     // display data
            cout << "No vehicles available!\n";
            return;
        }
        for (int i = 0; i < vehicles.size(); i++) {
            cout << "\n--- Vehicle " << i + 1 << " ---\n";
            vehicles[i]->display();
        }
    }

    void searchByID(int id) {      // search data 
        for (int i = 0; i < vehicles.size(); i++) {
            if (vehicles[i]->getID() == id) {
                vehicles[i]->display();
                return;
            }
        }
        cout << "Vehicle not found!\n";
    }

    ~VehicleRegistry() {
        for (int i = 0; i < vehicles.size(); i++)
            delete vehicles[i];
    }
};



int main() {

    VehicleRegistry reg;
    int choice;

    do {
        cout << "\n===== Vehicle Management System =====";
        cout << "\n1. Add Vehicle";
        cout << "\n2. Display All Vehicles";   // choice 
        cout << "\n3. Search Vehicle by ID";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            int type;
            cout << "\nSelect Vehicle Type";
            cout << "\n1. Sedan";
            cout << "\n2. SUV";
            cout << "\n3. Electric Car";
            cout << "\n4. Sports Car";
            cout << "\n5. Flying Car";
            cout << "\nEnter type: ";
            cin >> type;

            int id, year;
            string manu, model, fuel;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Manufacturer: ";
            cin >> manu;
            cout << "Model: ";
            cin >> model;
            cout << "Year: ";
            cin >> year;

            if (type == 1) {
                cout << "Fuel Type: ";
                cin >> fuel;
                reg.addVehicle(new Sedan(id, manu, model, year, fuel));
            }
            else if (type == 2) {
                cout << "Fuel Type: ";
                cin >> fuel;
                reg.addVehicle(new SUV(id, manu, model, year, fuel));
            }
            else if (type == 3) {
                int battery;
                cout << "Battery Capacity: ";
                cin >> battery;
                reg.addVehicle(new ElectricCar(id, manu, model, year, battery));
            }
            else if (type == 4) {
                int battery, speed;
                cout << "Battery Capacity: ";
                cin >> battery;
                cout << "Top Speed: ";
                cin >> speed;
                reg.addVehicle(new SportsCar(id, manu, model, year, battery, speed));
            }
            else if (type == 5) {
                int battery, range;
                cout << "Battery Capacity: ";
                cin >> battery;
                cout << "Flight Range: ";
                cin >> range;
                reg.addVehicle(new FlyingCar(id, manu, model, year, battery, range));
            }
        }
        else if (choice == 2) {
            reg.displayAll();
        }
        else if (choice == 3) {
            int id;
            cout << "Enter Vehicle ID: ";
            cin >> id;
            reg.searchByID(id);
        }

    } while (choice != 4);

    cout << "\nTotal Vehicles Created: " << Vehicle::totalVehicles << endl;
    return 0;
}
