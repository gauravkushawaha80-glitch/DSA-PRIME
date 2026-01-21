#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300 and n<=460){
        cout<<"macbook";
    }
     else if (n>=200 and n<=280){
        cout<<" kurkure";
    } 
    else if (n>=1100 and n<=1500){
        cout<<"cycle";
    }
    else if(n>50 and n<=80){
        cout<<"bike";
    }
    else{
        cout<<" batter luck next time ";
    }
}