#include<iostream>
using namespace std;
int main(){
    int n;
    int b;
    cin>>n;
    if(n<=100){
    b=n*2;
    cout<<b<<endl;
    }
    else if(n>100 and n<=200){
    b=n*3;
    cout<<b<<endl;
    }
    else{
    b=n*5;
    cout<<b<<endl;
    }
}