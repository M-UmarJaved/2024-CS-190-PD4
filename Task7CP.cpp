#include<iostream>
using namespace std;
void flowerShop(int red_rose, int white_rose, int tulips, float price, float final_price);
main(){
    int red_rose, white_rose, tulips;
    float price, final_price;
    cout<<" Red Rose: ";
    cin>>red_rose;
    cout<<" White Rose: ";
    cin>>white_rose;
    cout<<" Tulips: ";
    cin>>tulips;

    flowerShop(red_rose,white_rose,tulips,price,final_price);
    
}
void flowerShop(int red_rose, int white_rose, int tulips, float price, float final_price)
{
    price = (red_rose * 2) + (white_rose * 4.10) + (tulips * 2.50);
    if(price > 200){
        final_price = price - (price*20)/100;
        cout<<" Original Price: $" << price << endl;
        cout<<" Price after discount: $" << final_price;
    }
    if(price < 200){
        cout<<" Original Price: $" << price << endl;
        cout<<" No discount applied.";
    }
}

