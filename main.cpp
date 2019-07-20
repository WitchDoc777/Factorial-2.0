#include <iostream>

#define size 99999999

using namespace std;

int multiply (int x, int arr[] , int arr_size);

void fact(int n)
{
    int arr [size];
    arr[0]=1;
    int arr_size = 1;

    for ( int i=2 ; i <= n ; i++)
    {
        arr_size= multiply(i,arr, arr_size);

    }

    for (int i =arr_size -1 ; i >=0 ; i--)
    {
        cout << arr[i] ;
    }
}



int multiply(int x, int arr[] , int arr_size)
{
    int carry =0;

    for ( int i=0 ; i < arr_size  ; i++)
    {
        int prdt = arr[i] * x + carry;

        arr[i] = prdt % 10;

        carry = prdt/10 ;
    }

    while (carry != 0)
    {
        arr [arr_size] = carry %10 ;
        carry = carry / 10;
        arr_size++;
    }
    return arr_size;

}

int main()
{
   int n;
   cin >>n ;
    fact (n);
    return 0;
}
