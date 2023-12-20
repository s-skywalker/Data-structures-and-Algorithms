
/* 
lets take an array - {0,1,1,0,1,0,1,0}
we have to sort the array in such a way that we print all the number of zeroes first and then we print the number of ones 
like this - {0,0,0,0,1,1,1,1}

to print the number of ones first, write the loop for sorting and printing ones first and then go for the zero. 
*/

#include<iostream>
using namespace std;

void sortOneZero(int arr[], int n){

    int oneCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            zeroCount++;

        if(arr[i] == 1)
            oneCount++;
    }
       
    int index = 0;

      while (oneCount--) // while the count of ones keeps decreasing 
        {
            arr[index] = 1;
            index++;
        }
        
    while(zeroCount --) 
    // while the count of zeroes keeps decreasing (8 asley zeros, tar 7,6,5,4 etc jevha apan ek zero read krto)
    // tevha count decrease honarey
    {
        arr[index] = 0;
        index ++;

    }
      

/*

logic for while loops 

while the count of zero decrements (it decrements when we print the number of zeroes)
like there are 5 zeroes, we print one zero, there are 4, we print another, there are 3 
same way, it goes for ones count 

arr[index] = 0 is used to sort and print the number of zeroes 
arr[index] = 1 is used to sort and print the number of ones 

index ++ is used for printing the elements onto the next location of the array 

*/
        // # Using for loops 
        //     int i; // we need to declare i outside the loop so that it can be accessed from the second for loop
        // for ( i = 0; i < zeroCount; i++)
        // {
        //     arr[i] = 0;
        // }
        
        //  for (int j = i; j<n; j++)
        //     {
        //         arr[j] = 1;
        //     }


        /*
        
        for loop logic 

    (First For Loop) - It initializes i to 0 and iterates while i is less than zeroCount.
    Inside the loop, it sets arr[i] to 0.
    The loop effectively assigns 0 to the first zeroCount elements of the array.
    Second for loop:

    (Second For Loop) - It initializes a new variable j to the value of i after the first loop.
    It iterates while j is less than n.
    Inside the loop, it sets arr[j] to 1.
    The loop effectively assigns 1 to the remaining elements of the array starting from index i.
        

    In the second for loop, j is initialized to the value of i after the first loop (for (int j = i; j < n; j++)). 
    This is done to continue the loop from where the first loop left off, ensuring that 
    the assignment of 1 starts from the index immediately following the last 0 assigned in the first loop.
    
        */

}

int main(int argc, char const *argv[])
{
    
int arr[] = {1,0,0,0,1,1,0,1,0,0};    
int n = 10;

sortOneZero (arr, n);

for (int i = 0; i < n; i++)
{
        cout<<arr[i]<<" ";
}
    return 0;
}
