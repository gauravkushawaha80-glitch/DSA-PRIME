#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
    //selection short
    for(int i=0;i<n;i++){
         int min=i;
        for(int j=i+1;j<n;j++){
          if(arry[j]<arry[min]){
            min=j;
          }

        }
        swap(arry[i],arry[min]);
    }
    cout<<"sorted array through selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arry[i]<<" ";
    }
}