#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num1;
    cin>>num1;
    int count=0;
    int place=1;
    int digit;
    
    if(n<0)
    n=-n;
    while (n>0){
        digit =n%10;
        if(num1==digit)
        {
            count = count+1;
        }
        else {
            
        }
         n/= 10;
        place++;

    }
    cout<<count;
    return 0;
    
}