#include<iostream>
#include<vector>
using namespace std;


// we're making use of vectors to dynamically allocate memory efficiently. VECTOR IS A DYNAMIC ARRAY  

// printing array dynamically without vectors function 

// void arrPrint (int arr[], int n){
//     cout<<"the array elements are "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

// NOW, using vectors 

void vec (vector<int> v){
        int size = v.size();
        for (int i = 0; i < size; i++)
        {
            cout<<v[i]<<endl;
        }
        
}

int main(int argc, char const *argv[])
{


// PRINTING FRONT AND END ELEMENT 

vector<char> v;
v.push_back('a');
v.push_back('b');
v.push_back('c');

cout<<"Front element is: "<<v.front()<<endl;
cout<<"End element is: "<<v[v.size() - 1] <<endl;

/* 


*/
// PRINTING ARRAY'S CAPACITY AND SIZE (the following while loop will result in an infinite loop)

// vector<int> v;

// while (1)
// {
//     int data;
//     cin>>data;

//     v.push_back(data);
    
//     cout<<"Capacity of the array: "<<v.capacity()<<"Size of the array: "<<v.size();

// }


// PRINTING ARRAYS USING VECTORS 

// vector<int> v;

// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);

// vec(v);
// printing array dynamically, without vectors


// int n;
// cin >> n;
// int *arr = new int(n); // dynamic allocation

// for (int i = 0; i < n; i++)
// {
//     int data; 
//     cin>>data;
//     arr[i] = data;

// }
// arrPrint(arr, n);

    return 0;
}
