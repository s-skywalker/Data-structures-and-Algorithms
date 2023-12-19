#include<iostream>
using namespace std;

// ARRAY FUNCTION PRINTING 

// void printArray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//             cout<<arr[i] << " "; 
//     }
//     cout<<endl;
// }

// LINEAR SEARCH FUNCTION

// bool linearSearch (int arr[], int size, int target){
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] = target) {
//             return true;
//         }
//     }
//         return false;

// }

int main(int argc, char const *argv[])
{ 

//     int arr[5] = {2,4,6,8,10};
//     int size = 5;

//     int target = 8;

//    bool ans =  linearSearch(arr, size, target);

//     if(ans == 1){
//         cout<<"Target element found ";
//     }
//     else{
//         cout<<"Target element not found!";
//     }


   //  printArray(arr, size);

    /*
    int arr[50];
    cout<<"array created successfully! ";
    cout<<"address of arr is : "<<&arr<<endl; // base address = 0x61fe4

    int arr1[10];
    cout<<"Base address of the arr1 is : "<<&arr <<endl; // base address = 0x61fe48
    cout<<"Base address of the arr1 is : "<<arr <<endl; // base address will be the same even if we use arr or &arr 

    cout<<"size of arr1 is : "<<sizeof(arr1)<<endl;
    cout<<"size of arr is : "<<sizeof(arr)<<endl;


*/

     /* 
        size of arr1 is : 40
        size of arr is : 200
    */

//cases for array initialization

  /*
  int arr2[] = {10,20,30}; // will work, considers 0 for the remaining 2 two places by default 
   int arr3[5] = {1,2,3,4.6}; // will work
   int arr4[4] = {1,2,3}; // will work 
   int arr5[4] = {1,2}; // will work 
 //int arr[3] = {1,2,3,4}; // wont work, too many initiailized values in this array 
  
  */
        
        // int arr[5] = {1,2,3,4,5};
        // cout<<arr[0]<<endl; 
        // cout<<arr[1]<<endl; 
        // cout<<arr[2]<<endl; 
        // cout<<arr[3]<<endl; 
        // cout<<arr[4]<<endl; 

    // PRINT USING LOOPS 
    
    // int n = 5;
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<< " ";
    //     // cout<<arr[i]<< endl;
    // }


// TAKING INPUT FROM THE USER FOR THE ARRAY 

// int arr[5];
// int n = 5;
// for (int i = 0; i < n; i++)
// {
//     cout<<"enter the value of index " << i <<" ";
//     cin>>arr[i];
//     cout<<endl;

// }

// // PRINTING THE ARRAY 
// for (int i = 0; i < n; i++)
// {
//      cout<<arr[i]<<endl;
// }


// PROBLEM STATEMENT - declare an array, take input and double each value of the array element

// example - 1 2 3 4 5 when doubled will be written as (1*2 = 2, 2*2 = 4, 3*2 = 6, 4*2 = 8, 5*2 = 10)

// int n = 5;
// int arr[5];

// for (int i = 0; i < n; i++)
// {
//     cout<<"enter the element for the array index "<<i<<" ";
//     cin>>arr[i];

//     arr[i] = 2 *arr[i];
//     cout<<"the doubled value for the array index "<<i <<" is" <<" ";
//     cout<<arr[i] <<endl;

// }

// USING LOOPS 

// int n = 5;
// int arr[5];

// // take input for the array
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }

// for (int i = 0; i < n; i++)
// {
//     cout<<"printing before doubling the values "<<arr[i]<<endl;
// }

// // double the array element's value

// for (int i = 0; i < n; i++)
// {
//     arr[i] = 2 * arr[i];
// }

// for (int i = 0; i < n; i++)
// {
//     cout<<"printing after doubling the values "<<arr[i]<<endl;
// }


// CREATE AN ARRAY, TAKE INPUT FOR THE ARRAY, AND PRINT THE SUM OF THE ARRAY ELEMENTS  


//  int n = 5;
//     int arr[5];

//     // Input array elements
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Calculate the sum of array elements
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum = sum + arr[i];
//     }

//     // Print the sum
//     cout << "Sum of array elements: " << sum << endl;


// LINEAR SEARCH 

// int target = 10;
// int arr[5] = {2,4,6,8,10};
// int n = 5;

// bool flag = 0; // 0 = not found, 1 = found 

// for (int i = 0; i < n; i++)
// {
//     if(arr[i] == target){
//         // cout<<"Target value is found at location "<<i<<endl; // alternative 
//         flag = 1;
//         break;
//     }
// }

// if(flag == 1){
//     cout<<"Target found!";
// }
// else{
//     cout<<"not found!"; 
// }
    return 0;
}