#include<iostream>
using namespace std; 
int main(){
    int n;
   
    cin>>n;
    int j=0,k=n-1;
    int arry[n];
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
         for(int i=0;i<=n;i++){
          
            while(j<=k){
                swap(arry[j],arry[k]);
                j++;
                k--;
            }
        }
             for(int i=0;i<n;i++){
           cout<<arry[i];
            }
        
    
}