
//Problem Given an array of size n. for every i from 0 to n-1 output max(a[0], a[1]....,a[i])


#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx, arr[i]);
        cout<<mx<<" ";
    }cout<<endl;
    return 0;
}