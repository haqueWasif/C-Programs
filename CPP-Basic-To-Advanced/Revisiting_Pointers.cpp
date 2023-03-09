#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;

    cout<<"The value of a is "<<*(ptr)<<endl;

    // new operator
    int *p = new int(40); // new operator request for memory allocation during run time and intializes the memory and returns the address of the newly allocated and initialized memory
    // float *p = new float(40.78)
    cout<<"The value at address stored in p is "<<*(p)<<endl;

    int *arr = new int[3]; // Dynamically creating arrays
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    // *(arr) = 10;
    // *(arr+1) = 20;
    // *(arr+2) = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete operator
    /* delete arr; frees the allocated memory but no guarranty that all the dynamically allocated memories for the array are freed */
    delete[] arr; // frees all the contiguous allocated memory for the array
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;



    return 0;
}