#include<iostream>
using namespace std;
void reverse(string user_input);
main()
{
    string user_input;
    cout<<" Enter 'true' or 'false': ";
    cin>>user_input;
    reverse(user_input);
}
void reverse(string user_input)
{
    if(user_input == "true"){
        cout<<" false";
    }
    if(user_input == "false"){
        cout<<" true";
    }
}