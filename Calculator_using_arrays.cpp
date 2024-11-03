// Calculator_using_arrays
#include <iostream>
using namespace std;

int check_ops(){
    int check_op;
    cout << "Enter the number from the following calculator to form an operation (+,-,*,/) using (0,1,2,3): ";
    cin >> check_op;
    return check_op;
}

void processing_ops(int check_op, float number[]){
    if (check_op == 0) {
        cout << "The sum of the two numbers is " << number[0] + number[1];
    } 
    else if (check_op == 1) {
        cout << "The subtraction of the two numbers is " << number[0] - number[1];
    } 
    else if (check_op == 2) {
        cout << "The multiplication of the two numbers is " << number[0] * number[1];
    } 
    else if (check_op == 3) {
        cout << "The division of the two numbers is " << number[0] / number[1];
    } 
    else {
        cout << "Invalid operation";
    }
}

void calculator_inputs(float &a, float &b){
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
}

int main(){
    float num[2];
    int check_op = check_ops();
    calculator_inputs(num[0], num[1]);
    processing_ops(check_op, num);
    return 0;
}
