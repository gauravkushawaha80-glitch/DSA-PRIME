#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0){
        if(n%4==0 or  n%100==0){
            cout<<"Leap Year";
        }
        else
        {
            cout<<"Not a Leap Year";
        }
        
    }
    else
    cout<<"Not a Leap Year";
}