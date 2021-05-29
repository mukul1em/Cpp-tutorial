#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maxNo = max(arr[i],maxNo);
        minNo = min(arr[i], minNo);
    }

    cout<<"Min number"<<minNo<<endl;
    cout<<"Max Number"<<maxNo<<endl;
}