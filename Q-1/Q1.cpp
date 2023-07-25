/*

1- Find the sum of all elements in an Array.
2- Find the maximum Element in an Array.
3- Count the no. of Even Elements in an Array.
4- Find pairs with given sum.

*/

#include<iostream>

using namespace std;

int main()
{
    int a[6]={1,2,4,3,6,8};
    int sum=0;
    int max=a[0];
    int evenCount=0;
    int count=0;
    int value=5;
    for(int i=0;i<6;i++)
    {
        sum+=a[i];
        if(a[i]%2==0 && a[i]!=0){
            evenCount++;
        }

        if(max<a[i]){
            max=a[i];

        }

        for(int j=i+1;j<6;j++){
            if(a[i]+a[j]==value)
            {
                count++;
            }
        }
    }

    cout<<"Sum of all element = "<<sum<<endl;
    cout<<"Max Element = "<<max<<endl;
    cout<<"Even Elements = "<<evenCount<<endl;
    cout<<"Pairs having sum = "<<value<<" is "<<count<<endl;
    return 0;
}