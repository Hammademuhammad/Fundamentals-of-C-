//Calculator_using functions_1
#include<iostream>
using namespace std;

//Get Operations from user
int get_ops(int ops){
    cout<<"Enter the operation you want to perform: "<<endl;
    cout<<"0. Addition"<<endl;
    cout<<"1. Subtraction"<<endl;
    cout<<"2. Multiplication"<<endl;
    cout<<"3. Division"<<endl;
    cout<<"4. Exit"<<endl;
    cin>>ops;
    return ops;
}
//Take Operations from user
int check_ops(int ops){
    if(ops<0 || ops>4){
        cout<<"Invalid Operation"<<endl;
        return 0;
    }
    else{
        return 1;
    }     
}
//Get Numbers from user
int get_numbers(float num1, float num2){
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    return 0;
}
//Addition
int addition(float num1, float num2){
    return num1+num2;
}
//Subtraction
int subtraction( float num1, float num2){
    return num1-num2;
}
//Multiplication
int multiplication( float num1, float num2){
    return num1*num2;
}
//Division
int divisons( float num1, float num2){
    return num1/num2;
}

int main(){
    int ops;
    float num1, num2;
    while(1){
        ops = get_ops(ops);
        if(check_ops(ops)==0){
            continue;
        }
        if(ops==4){
            break;
        }
        get_numbers(num1, num2);
        switch(ops){
            case 0:
                cout<<"Addition is: "<<addition(num1, num2)<<endl;
                break;
            case 1:
                cout<<"Subtraction is: "<<subtraction(num1, num2)<<endl;
                break;
            case 2:
                cout<<"Multiplication is: "<<multiplication(num1, num2)<<endl;
                break;
            case 3:
                cout<<"Division is: "<<divisons(num1, num2)<<endl;
                break;
        }

    }
    return 0;
}
