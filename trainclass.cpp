#include<iostream>
#include<vector>
using namespace std;

class Train {
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    static int TrainCount;

public:
    Train() {
        trainNumber = 0;
        trainName = "not set";
        source = "not set";
        destination = "not set";
        trainTime = "not set";
        TrainCount++;
    }

    ~Train() {
        TrainCount--;
    }

    // Setters
    void setTrainNumber(int n) { trainNumber = n; }
    void setTrainName(string n) { trainName = n; }
    void setSource(string s) { source = s; }
    void setDestination(string d) { destination = d; }
    void setTrainTime(string t) { trainTime = t; }

    // Getters
    int getTrainNumber() { return trainNumber; }

    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();

        cout << "Enter Train Name: ";
        getline(cin, trainName);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Train Time: ";
        getline(cin, trainTime);
    }

    void displayTrainDetails() {
        cout << "\nTrain Number : " << trainNumber;
        cout << "\nTrain Name   : " << trainName;
        cout << "\nSource       : " << source;
        cout << "\nDestination  : " << destination;
        cout << "\nTrain Time   : " << trainTime << endl;
    }

    static int getTrainCount() {
        return TrainCount;
    }
};

int Train::TrainCount = 0;

class RailwaySystem {
private:
    vector<Train> trains;

public:
    void addTrain() {
        Train t;
        t.inputTrainDetails();
        trains.push_back(t);
        cout << "\nTrain Added Successfully:";
    }

    void displayAllTrains() {
        if (trains.empty()) {
            cout << "\nNo Train Records Found:";
            return;
        }

        for (int i = 0; i < trains.size(); i++) {
            trains[i].displayTrainDetails();
        }
    }

    void searchTrainByNumber(int number) {
        for (int i = 0; i < trains.size(); i++) {
            if (trains[i].getTrainNumber() == number) {
                cout << "\nTrain Found!";
                trains[i].displayTrainDetails();
                return;
            }
        }
        cout << "\nTrain Not Found!\n";
    }
};

int main() {
    RailwaySystem rs;
    int choice;

    do {
        cout << "\n--- Railway Management System ---";
        cout << "\n1. Add Train";
        cout << "\n2. Display All Trains";
        cout << "\n3. Search Train by Number";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            rs.addTrain();
        }
        else if (choice == 2) {
            rs.displayAllTrains();
        }
        else if (choice == 3) {
            int num;
            cout << "Enter Train Number: ";
            cin >> num;
            rs.searchTrainByNumber(num);
        }

    } while (choice != 4);

    return 0;
}
