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


    return 0;
}
