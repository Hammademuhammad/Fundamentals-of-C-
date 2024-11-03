//Code_14_Sorting_Ascending
#include<iostream>
using namespace std;

int main(){
    int num[5];
    for(int i=0;i<=4;i++){
        cout<<"Enter number "<< i+1 << " : ";
        cin>>num[i];
    }
    cout<<"Inserted Array: " ;
    for(int i=0;i<=4;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;5

    for(int i=0;i<=4;i++){
        for(int j=i;j<=4;j++){
            if(num[i]<=num[j]){
                cout<<"Completing....."<<endl;
            }
            else{
                int temp;
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                cout<<"Completing....."<<endl;
            }
        }
    }
    cout<<"Sorted Array: " ;
    for(int i=0;i<=4;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    return 0;
}