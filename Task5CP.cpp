#include<iostream>
using namespace std;
void bonusCheck(int pos1,int pos2);
main(){
    int pos1,pos2;
    cout<<" Enter your position: ";
    cin>>pos1;
    cout<<" Enter your friend's postion: ";
    cin>>pos2;
    bonusCheck(pos1,pos2);
}
void bonusCheck(int pos1,int pos2){
    if((pos2-pos1) <= 6){
        cout<<" True";
    }
    if((pos2-pos1) > 6){
        cout<<" False";
    }
}

