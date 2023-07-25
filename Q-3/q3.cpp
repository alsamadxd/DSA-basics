/*

Given two matrices, the task is to add them.
Matrices can either be Square or Rectangular but are of same size.

*/

#include<iostream>
using namespace std;

int main(){
    int r,c;
    
    cout<<"Enter the no. of rows"<<endl;
    cin>>r;
    cout<<"Enter the no. of columns"<<endl;
    cin>>c;

    int a[r][c];
    int b[r][c];

    cout<<"Enter the elements of 1st matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }


    cout<<"Enter the elements of 2nd matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }

    cout<<"Enter the elements of 2nd matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<(a[i][j]+b[i][j])<<" ";
        }
        cout<<endl;
    }
    return 0;


}