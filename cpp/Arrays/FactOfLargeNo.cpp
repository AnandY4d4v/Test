#include <bits/stdc++.h>
using namespace std;

int multiply(int n, int arr[], int arrSize)
{
    int carry = 0;
    for (int i = 0; i < arrSize; i++)
    {
        int val = n * arr[i] + carry;
        int digit = val % 10;

        arr[i] = digit;
        carry = val / 10;
    }

    while (carry != 0)
    {
        int digit = carry % 10;
        arr[arrSize] = digit;
        arrSize++;
        carry = carry / 10;
    }

    return arrSize;
}

void factorial(int n)
{
    int arr[100000] = {1};
    int arrSize = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int i = arrSize - 1; i >= 0; i--) cout << arr[i];
        
    }
    }
    

int main()
{
    factorial(12);

    return 0;
}