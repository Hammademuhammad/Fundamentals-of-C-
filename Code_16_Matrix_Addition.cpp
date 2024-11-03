//Code_16_Matrix_Addition
#include<iostream>
using namespace std;

int main(){
    int matrix_1[3][3];
    int matrix_2[3][3];
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the element "<< i+1 <<" "<< j+1 <<" of matrix 1: ";
            cin>>matrix_1[i][j];
    }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the element "<< i+1 <<" "<< j+1 <<" of matrix 2: ";
            cin>>matrix_2[i][j];
    }
    }
    cout<<"Matrix 1: "<< endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< matrix_1[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2: "<< endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< matrix_2[i][j] <<" ";
        }
        cout<<endl;
    }
        cout<<"Calculating Sum........ "<< endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum[i][j]=matrix_1[i][j] + matrix_2[i][j];
            }
        cout<<endl;
        }
            cout<<"SUM: "<< endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< sum[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}
