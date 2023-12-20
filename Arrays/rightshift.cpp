/*
WAP to shift array elements 

10 20 30 40 50 60 - given array
60 10 20 30 40 50 - expected array 

10 -> onto the position of 29
20 -> on 30's position, and so on 

*/ 
#include<iostream>
using namespace std;

/*
step 1 - store the value of the last element of the array in a temporary variable 
temp = n - 1 (the last element of the array is n - 1)

step 2 - arr[i] = i - 1 (put the value of the preceeding array element in the current position, for that
we used arr[i] = arr[i - 1])

10 20 30 40 50 60
   i

50 10 20 30 40 50

*/
void rightShift(int arr[], int n){
    int temp = arr[n - 1];

    // step 2, shift the index of the array from arr[i] = arr[i - 1]

    for (int i = n - 1; i >= 1; i--)
    {
           arr[i] = arr[i - 1]; 
    }

// step 3 copy the value of temp into the first index 
arr[0] = temp;

}

int main(int argc, char const *argv[])
{
    
    int arr[] = {10,20,30,40,50,60};
    int n = 6;


    rightShift(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
