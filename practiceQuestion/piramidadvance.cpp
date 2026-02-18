#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int m= n/2;
    for(int i=0;i<=m;i++){
        for(int j=0;j<i;j++){
         cout<<" ";
        }
         for (int j = 0; j < n - 2*i; j++) {
            if (j % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout<<endl;
    }
  
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<i;j++){
         cout<<" ";
        }
         for (int j = 0; j < n - 2*i; j++) {
            if (j % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout<<endl;
    }
     
     
}