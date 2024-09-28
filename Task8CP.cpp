#include <iostream>
using namespace std;
void pet(int holidays);
int main() {
    int holidays;
    cout << "Enter the number of holidays: ";
    cin >> holidays;

    pet(holidays);
    
}
void pet(int holidays) 
{
    
    int norm = 30000;
    int workingDayMinutes = 63;
    int holidayMinutes = 127;
    int totalDays = 365; 
    int workingDays = totalDays - holidays;
    int totalGameTime = (workingDays * workingDayMinutes) + (holidays * holidayMinutes);
    int difference = norm - totalGameTime;

    if (difference > 0) {
        cout << "Tom can sleeps well." <<endl;
        cout << difference/60 << " hours and " << difference%60 << " minutes less for play";
    } if (difference < 0) {
        cout << "Tom will run away." << endl;
        cout << -(difference/60) << " hours and " << -(difference%60) << " minutes for play";
    }
}

