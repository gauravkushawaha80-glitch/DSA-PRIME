#include<iostream>
using namespace std;
int main(){
    int n;
    int r=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" \t";
        }
        //print number
        for(int j=1;j<=(2*i)-1;j++){
         cout<< r++<<" \t";
        }
        cout<<endl;
       
    }
}