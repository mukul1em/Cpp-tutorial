
// sum of all subArrays

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,3,4,5,6};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=i;j<5;j++){
            sum+=arr[j];
            cout<<sum<<endl;


        }
    }
    return 0;
    
}