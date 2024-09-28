#include <iostream>
using namespace std;
void tpChecker(int people, int tp);
main(){
    int people, tp;
    cout<<" Number of people in the household: ";
    cin >> people;
    cout<<" Number of rolls of TP: ";
    cin >> tp;
    tpChecker(people,tp);
}
void tpChecker(int people, int tp){
    int sheets = tp * 500;
    int peopleSheetsDay = people * 57;
    int final = sheets / peopleSheetsDay;
    if(final < 14){
        cout<<" Your TP will only last "<< final<<" days, buy more!";
    }
      if(final > 14){
        cout<<" Your TP will last "<< final<<" days, no need to panic!";
    }
}

