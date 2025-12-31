#include <iostream>
using namespace std;

class TimeConverter {
public:
   
    void secondsTohours(int totalSeconds) {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << "HH:MM:SS  "
             << hours << ":"
             << minutes << ":"
             << seconds << endl;
    }

  
    void hoursToSeconds(int hours, int minutes, int seconds) {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
        cout << "Total Seconds  " << totalSeconds << endl;
    }
};

int main() {
    TimeConverter tc;
    int choice;

    cout << "Time Converter\n";
    cout << "1. Seconds to HH:MM:SS\n";
    cout << "2. HH:MM:SS to Seconds\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int totalSeconds;
        cout << "Enter total seconds: ";
        cin >> totalSeconds;
        tc.secondsToTime(totalSeconds);
    }
    else if (choice == 2) {
        int h, m, s;
        cout << "Enter HH: ";
        cin >> h;
        cout << "Enter MM: ";
        cin >> m;
        cout << "Enter SS: ";
        cin >> s;
        tc.timeToSeconds(h, m, s);
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}

