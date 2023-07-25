/*

Reverse an Array without using any extra space

*/

#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int i=0;
    int size=sizeof(a)/sizeof(a[0]);
    int j=size-1;
    while(i<j){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i++;
        j--;

    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}