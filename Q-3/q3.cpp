/*

Given two matrices, the task is to add them.
Matrices can either be Square or Rectangular but are of same size.

*/

#include<iostream>
using namespace std;

int main(){
    int r,c;

    // Get the no. of rows and columns of the matrices
    cout<<"Enter the no. of rows"<<endl;
    cin>>r;
    cout<<"Enter the no. of columns"<<endl;
    cin>>c;


    // 2D Array declaration
    int a[r][c];
    int b[r][c];

    // Getting the elements of 1st Matrix
    cout<<"Enter the elements of 1st matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }


    // Getting the elements of 1st Matrix
    cout<<"Enter the elements of 2nd matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }

    // Display the Resultant Matrix
    cout<<"Enter the elements of 2nd matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<(a[i][j]+b[i][j])<<" ";
        }
        cout<<endl;
    }
    return 0;


}
