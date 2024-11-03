//Code_7_Aray_Loop
#include<iostream>
using namespace std;

int main(){
    int array[15];
    for(int i=0;i<=14;i++){
        array[i]=i;
    }
    for(int i=0;i<=14;i++){
        cout<<array[i];
        cout<<endl;
    }    
    return 0;
}