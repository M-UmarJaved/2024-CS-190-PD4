#include<iostream>
using namespace std;
void discount(int ticket_price, string name);
main(){
    int ticket_price;
    string name;
    cout<<" Enter the country's name: ";
    cin>> name;
    cout<<" Enter the ticket price in dollars: $";
    cin>> ticket_price;
    discount(ticket_price,name);
}
void discount(int ticket_price, string name){
    if(name == "Pakistan"){
        ticket_price = ticket_price - ((ticket_price*5)/100);
        cout<<" Final ticket price after discount: $"<<ticket_price;
    }
    if(name == "Ireland"){
        ticket_price = ticket_price - ((ticket_price*10)/100);
        cout<<" Final ticket price after discount: $"<<ticket_price;
    }
    if(name == "India"){
        ticket_price = ticket_price - ((ticket_price*20)/100);
        cout<<" Final ticket price after discount: $"<<ticket_price;
    }
    if(name == "England"){
        ticket_price = ticket_price - ((ticket_price*30)/100);
        cout<<" Final ticket price after discount: $"<<ticket_price;
    }
    if(name == "Canada"){
        ticket_price = ticket_price - ((ticket_price*45)/100);
        cout<<" Final ticket price after discount: $"<<ticket_price;
    }
}
