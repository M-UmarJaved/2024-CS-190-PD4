#include<iostream>
using namespace std;
void checkTime(int hours,int mint, int hours_to_mints);
main(){
    int hours, mint, hours_to_mints;
    cout<<" Enter the number of hours: ";
    cin >> hours;
    cout<< " Enter the number of minutes: ";
    cin>> mint;

    checkTime(hours,mint,hours_to_mints);
}
void checkTime(int hours,int mint, int hours_to_mints){
    hours_to_mints = hours * 60;
    if(hours_to_mints > mint){
        cout<< hours;
    }
    if(hours_to_mints < mint){
        cout<< mint;
    }
}

