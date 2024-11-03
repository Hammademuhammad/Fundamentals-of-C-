//Code_12_Printing_Pattern_4
#include<iostream>
using namespace std;

int main(){   
        for (int i=4; i>=0 ; i--){
    for(int k=4;k>=i;k--){
            cout<< " ";
        }
        for (int j=0; j<=i ; j++){
        cout<<"#";
        }
        for (int l=0; l<=i-1 ; l++){
        cout<<"#";
        }
            cout<<endl;;
    }
    for (int i=0; i<=4 ; i++){
        for(int k=4;k>=i;k--){
            cout<< " ";
        }
        for (int j=0; j<=i ; j++){
        cout<<"#";
        }
        for (int l=0; l<=i-1 ; l++){
        cout<<"#";
        }
            cout<<endl;;
    }
    return 0;
}