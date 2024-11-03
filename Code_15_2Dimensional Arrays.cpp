//Code_15_2Dimensional Arrays
#include<iostream>
using namespace std;

int main(){
    int num[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            num[i][j]=i+j;
    }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< num[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}