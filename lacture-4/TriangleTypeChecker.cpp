 #include<iostream>
 using namespace std;
 int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a==b and b==c ){
        cout<<" EqUilateral;";
    }
    else if(a==b or b==c or a==c){
        cout<<"Iosleted";
    }
    else
    cout<<"Scalene";
 }