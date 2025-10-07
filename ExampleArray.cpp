#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,5> arr = {1,2,3,4,5};   // initialization of array
    array<int,5> arr2{5,4,3,2,1};          // uniform initialization

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";          // accessing elements of array
    }
    cout<<endl;
    cout<<arr.at(2)<<endl;        // accessing elements of array using at() function
    cout<<"Front element of an array: "<<arr.front()<<endl;      // accessing first element of array
    cout<<"Back element of an array: "<<arr.back()<<endl;       // accessing last element of array
    cout<<"Size of an array: "<<arr.size()<<endl;       // size of array
    cout<<"Is array empty: "<<arr.empty()<<endl;      // check if array is empty or not
    arr.fill(10);                  // fill array with a specific value
    cout<<"First element after fill: "<<arr[0]<<endl;          // accessing elements of array after fill function
    return 0;
}