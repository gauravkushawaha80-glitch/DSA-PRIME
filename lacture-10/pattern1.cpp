#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    int n=(r+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            
           cout<<"*";
        }
        //space 
        for(int j=1;j<=(2*i);j++){
            cout<<" ";
        }

        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i=n-1;i>=1;i--){
        for(int j=n-1;j>=i;j--){
            
           cout<<"*";
        }
        //space 
        for(int j=1;j<=(2*i);j++){
            cout<<" ";
        }

        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;


    }
}