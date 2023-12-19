#include<iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int left = 0; 
    int right = size - 1;
    // while (left <= right)
    // {
    //     swap(arr[left], arr[right]);
    //     left++;
    //     right--;
    // }

         // using for loop 
        for (left = 0, right = size - 1; left <= right; left++, right--){
            swap(arr[left], arr[right]);
        }

        for (int i = 0; i < size; i++)
        {
            cout<<arr[i] <<" ";
        }

}
int main(int argc, char const *argv[])
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;

    reverseArr(arr, size);

    return 0;
}
