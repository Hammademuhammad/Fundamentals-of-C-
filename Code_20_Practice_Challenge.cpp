#include <iostream>
using namespace std;

int main() {

    cout << "Hi! Here's a challenge for you all, and the winner will get a cup of tea from me ☕🫖. The Challenge is simple: you are tasked to write a code for a Quantum Scientist.\n"
            "Consider a 5-dimensional space, which in fact has infinite four-dimensional spaces, and each 4D space has infinitely many 3D spaces, and each 3D space has infinitely many 2D planes.\n"
            "Now you have two tasks:\n"
            "a) Prove that all the spaces are derived from a point (0,0,0).\n"
            "b) Show that there's no existence of space.\n"
            "c) Find overlapping points of two different timelines for two different 4D spaces of your choice.\n"
            "Do this all in C++.\n"<< endl;

    cout<<"A simplified Answer: "<<endl;
    for(int q=0;q<3;q++){
        cout<<"Welcome to 5D Space and you are right now in 5D Space at q= "<<q<<endl;
    for (int r = 0; r < 3; r++) {
        cout << "Welcome to 4D Space and you are right now in 4D Space at r= " << r << endl;
    int array1[3][3], array2[3][3], array3[3][3];
    cout<<"Arays are being prepared"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array1[i][j] = (i + j) % 3;
            array2[i][j] = (i + j) % 3;
            array3[i][j] = (i + j) % 3;

        }
    }
    cout<<"Arrays are ready"<<endl;
    cout<<"Array 1 is"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Array 2 is"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<array2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Array 3 is"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<array3[i][j]<<" ";
        }
        cout<<endl;
    }
            int front[3][3];
            int back[3][3];
            int left[3][3];
            int right[3][3];
            int top[3][3];
            int bottom[3][3];
            cout<<"Front side of the 3D cube is"<<endl;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    front[i][j] = array1[i][j]+ array2[i][j]+array3[i][j];
                    if(front[i][j]>=3){
                        front[i][j]=front[i][j]%3;
                    }
                    cout<<front[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Back side of the 3D cube is"<<endl;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    back[i][j] = array1[i][j]+ array2[i][j]+array3[i][j];
                    if(back[i][j]>=3){
                        back[i][j]=back[i][j]%3;
                    }
                    cout<<back[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Left side of the 3D cube is"<<endl;
            for (int i = 0; i < 3; i++) {
                left[i][2]=0;
                left[i][1]=0;
                left[i][0]=0;
                for (int j = 0; j < 3; j++) {
                    left[i][j] += array1[i][j];
                    left[i][j] += array2[i][j];
                    left[i][j] += array3[i][j];

                    if(left[i][j]>=3){
                        left[i][j]=left[i][j]%3;
                    }
                    cout<<left[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Right side of the 3D cube is"<<endl;
            for (int i = 0; i < 3; i++) {
                right[i][2]=0;
                right[i][1]=0;
                right[i][0]=0;
                for (int j = 0; j < 3; j++) {
                    right[i][j] += array1[i][j];
                    right[i][j] += array2[i][j];
                    right[i][j] += array3[i][j];

                    if(right[i][j]>=3){
                        right[i][j]=right[i][j]%3;
                    }
                    cout<<right[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Top side of the 3D cube is"<<endl;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    top[i][j] = array1[i][j]+ array2[i][j]+array3[i][j];
                    if(top[i][j]>=3){
                        top[i][j]=top[i][j]%3;
                    }
                    cout<<top[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Bottom side of the 3D cube is"<<endl;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    bottom[i][j] = array1[i][j]+ array2[i][j]+array3[i][j];
                    if(bottom[i][j]>=3){
                        bottom[i][j]=bottom[i][j]%3;
                    }
                    cout<<bottom[i][j]<<" ";
                }
                cout<<endl;
            }
}
}

    return 0;
}
