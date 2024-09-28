#include<iostream>
#include<windows.h>
using namespace std;
void print_H();
void print_A();
void print_S();
void print_N();
void gotoxy(int x, int y);

main(){
print_H();
print_A();
print_S();
print_S();
print_A();
print_N();
}
void print_H(){

cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"#############"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"                "<<endl;


}

void print_A(){

cout<<"  #######  "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ######### "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<"                "<<endl;

}

void print_S(){

cout<<"    #######   "<< endl;
cout<<"  ##          "<<endl;
cout<<"  ##           "<<endl;
cout<<"   ##          "<<endl;
cout<<"     ######    "<<endl;
cout<<"          ##   "<<endl;
cout<<"           ##  "<<endl;
cout<<"          ##   "<<endl;
cout<<"    ######     "<<endl;

cout<<"                "<<endl;
}
void print_N(){

cout<<"  ## #      ##"<<endl;
cout<<"  ## ##     ##"<<endl;
cout<<"  ##  ##    ##"<<endl;
cout<<"  ##   ##   ##"<<endl;
cout<<"  ##    ##  ##"<<endl;
cout<<"  ##     ## ##"<<endl;
cout<<"  ##      # ##"<<endl;
cout<<"                "<<endl;
}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

