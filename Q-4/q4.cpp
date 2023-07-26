/*

Given a n*n matrix, ptint it's 
    1- Principal Diagonal Elements
    2- Secondary Diagonal Elements

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            cin>>arr[i][j];
            
        }
    }
    cout<<"Principal Diagonal Elements Are : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    cout<<"\nSecondary Diagonal Elements Are : "<<endl;

    int k=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i][k]<<" ";
        k--;
    }

}