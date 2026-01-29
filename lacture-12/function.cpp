#include<iostream>
using namespace std;
void greet(){
    //NO ARGUEMNET AND NO RETURN
    cout<<"hello"<<endl;
}
// ARGUMENET AND NO RETURN
void great(String name){
    cout<<"hello"<<name<<endl;
}
//NO ARGUMENET AND RETURn
int subtract(){
    int a=5;
    int b=4;
    int c = a-b;
    return c;
}
//ARGUEMENT AND RETURN
int add(int a,int b){
    int c =a+b;
    return c;
}
int main(){
    //greet();
    great("gaurav");
    //1s way
    int a=add(8,3);
    cout<<add(8,3)<<endl;
    //2nd way
    cout<<add(8,3)<<endl;
    cout<<subtract()<<endl;
    return 0;

}