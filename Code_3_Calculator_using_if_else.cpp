//Calculator
#include <iostream>
using namespace std;

int main(){
    int a,b;
    int check_op;
    cout<<"Enter the the number from following calculator to form operation (+,-,*,/) from (0,1,2,3): ";
    cin>>check_op;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    if(check_op==0){
        cout<<"The sum of two numbers is "<<a+b;
    }
    else if(check_op==1){
            cout<<"The subtraction of two numbers is "<<a-b;

    }
    else if(check_op==2){
            cout<<"The multiplication of two numbers is "<<a*b; 
    }
    else if (check_op==3){
            cout<<"The division of two numbers is "<<a/b; 
    } 
    else {
        cout<<"Invalid operation";
    }
    return 0;
}