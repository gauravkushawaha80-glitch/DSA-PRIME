#include<iostream>
using namespace std;
int rev(int n,int a){
int ans=0;
while(n!=0){

    int k=n%10;
        if(k==a)
        {
            ans++;
        }
        n=n/10;

    }
    return ans;
}

int main(){
int n,a;
cin>>n>>a;
cout<<rev(n,a);
return 0;
}

