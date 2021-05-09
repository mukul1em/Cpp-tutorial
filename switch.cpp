#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"HELLO"<<endl;
        break;
    case 'b':
        cout<<"hola"<<endl;
        break;
    case 'c':
        cout<<"ciao"<<endl;
        break;
    case 'd':
        cout<<"namaster"<<endl;
        break;
    case 'e':
        cout<<"salut"<<endl;
        break;
    
    default:
        cout<<"I am still learning"<<endl;
        break;
    }
    return 0;
}