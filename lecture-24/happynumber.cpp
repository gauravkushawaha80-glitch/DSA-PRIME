#include<iostream>
using namespace std;

bool isHappy(int n){
    int sum = 0;

    if(n == 1 || n == 7){
        return true;
    }
    else if(n < 10){
        return false;
    }
    else{
        while(n != 0){
            int k = n % 10;
            sum += k * k;   // square of digit
            n = n / 10;
        }
    }

    return isHappy(sum);   // recursive call
}

int main(){
    int n;
    cin >> n;

    if(isHappy(n))
        cout << "Happy Number";
    else
        cout << "Not Happy Number";

    return 0;
}
