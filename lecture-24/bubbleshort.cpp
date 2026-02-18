#include <iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arry[n];
  for(int i=0;i<n;i++){
            cin>>arry[i];
        }
        int temp = 0;  
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arry[j]<arry[i]){
                    temp = arry[i];
                    arry[i]= arry[j];
                    arry[j]= temp;
                }
            }
        }
        for(int i=0;i<n;i++){
        cout<<arry[i];
        }
        
}
