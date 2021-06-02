// form then biggest number in the numeric string 
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s = "465576895";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}