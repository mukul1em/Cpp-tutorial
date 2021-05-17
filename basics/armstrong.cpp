#include<iostream>
#include<math.h>
using namespace std;


int main() {
    int n;
    cin>>n;

    
    int sum = 0;
    int originaln = n;
    while(n>0){
        int d= n%10;
        
        sum+=pow(d,3);
        n = n/10;

        


    }
    if (sum==originaln){
        cout<<"number is a armstrong"<<endl;
    }else{
        cout<<"number is not a armstrong"<<endl;
    }
    return 0;
}