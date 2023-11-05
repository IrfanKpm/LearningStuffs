#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4};

    cout << "Size of the entire array (in bytes) :: " <<sizeof(arr1)<<endl; 
    cout << "Number of elements in the array :: " << sizeof(arr1)/sizeof(arr1[0])<<endl; 
//----------------------------------------------------------------------------------------------------
    cout << arr1<<endl; // memmory address of first element in arr1
    cout << &arr1<<endl; // memmory address of first element in arr1
    cout << *(arr1)<<endl; // *(arr1) is equivalent to arr1[0],
    cout << *(arr1+1)<<endl; // *(arr1+1) is equivalent to arr1[1]
    /* (array + 1) increments the pointer to point to the second element of the array. 
    This is because adding 1 to a pointer moves it to the next element of the same type.*/
//-----------------------------------------------------------------------------------------------------
    int j = sizeof(arr1)/sizeof(arr1[0])-1; // index start from 0,so -1 ( using for 2 loops)
        // Iterating Through an Array using for loop
    cout << "Iterating Through an Array using 'for' loop\n";
    for (int i = 0;i<=j;i++){
        cout<< "arr1["<<i<<"] = " << arr1[i] << endl;
    }
       // Iterating Through an Array using while loop
    cout << "Iterating Through an Array using 'while' loop\n";
    int i = 0;
    while (i<=j){
        cout<< "arr1["<<i<<"] = " << arr1[i] << endl;
        i++;
    }

}
