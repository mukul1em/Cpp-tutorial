#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i;i<n;i++){

        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
 
    }
    cout<<minNo<<" "<<maxNo;
    



    return 0;
}