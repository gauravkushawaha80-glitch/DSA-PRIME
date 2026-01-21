#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=90){
        cout<<"A"<<endl;
    }
    else if (n>=75 and n<90)
    {
        cout<<"B";
    }
    else if (n>=60 and n<75){
        cout<<"C";
    }
    else
    cout<<"Fail";
}