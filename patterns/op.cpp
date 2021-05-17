#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"num is divisble"<<endl;

    }else{
        cout<<"num is not divisible"<<endl;
    }
    return 0;
}