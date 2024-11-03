//Code_15_2_Dimensional_Arrays_ConservedSpace
//Conserved Sopace is a space which have no element greater than or equal to sum of indexes in this case it must be member of [0,1,2] 
#include<iostream>
using namespace std;

int main(){
    int num[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            num[i][j]=i+j;
            if(num[i][j]>=3){
                int temp;
                temp=num[i][j] % 3 ;
                num[i][j]=temp;
            }
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