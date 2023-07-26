/*

Perform Linear Search in an Array

*/

#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int flag=0;
    int target;
    cout<<"Enter the Value to check "<<endl;
    cin>>target;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                flag=1;
                cout<<"Element is Found "<<endl;
            }
        }
    }

    if(flag==0){
        cout<<"Not Found"<<endl;
    }
}