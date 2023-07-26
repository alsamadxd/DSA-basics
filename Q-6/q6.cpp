/*

Count the no. of prime in an array

*/

#include <iostream>
using namespace std;

int checkPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void countPrime(int arr[], int n)
{
    int no_prime = 0;

    for (int i = 0; i < n; i++)
    {
        int flag = checkPrime(arr[i]);
        no_prime += flag;
    }
    cout << "No of Primes = " << no_prime;
}

int main()
{
    int arr[] = { 2, 3, 4, 5, 7, 9, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    countPrime(arr, n);
}