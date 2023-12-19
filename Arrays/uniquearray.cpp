#include<iostream>
using namespace std;

int uniqueArray(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    
        return ans;
}

int main(int argc, char const *argv[])
{

int arr[] = {2,1,0,0,2,1,5};
int n = 7;

int finalAns = uniqueArray (arr, n);
cout<<"Final ans is : "<<finalAns<<endl;
// array 2,1,0,0,2,1,5 aahe
// we are using the XOR operator for finding the unique element. 
// the logic cancel outs the same elements such as 2, 1 and 0 with each other 
// XOR 5 with 0 th index, at 0 th index we have 2, so start XORING with 2 (it works like this. ans =  0 ^ 2 ^ 1 ^ 0 ^ 0 ^ 2 ^ 1 ^ 5) 
// ^ = XOR Operator 
// now, the unique element in the array is 5, so it is XOR'ed with 0, and any number XOR'ed with 0 returns the same number, so we print the unique element 

/* 

XOR's truth table 

A	B	A XOR B
0	0	0
0	1	1
1	0	1
1	1	0

*/

    return 0;
}
