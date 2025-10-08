#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Decleartion
    vector<int> numbers;
    vector<int> numbers1(5,20);
    vector<int> number2 = {1,2,3,4,5};
    vector<int>number3 {5,4,3,2,1};

    // Element access :
    // number2.at(5)=10;       // here you will get the excepetion as std::out_of_range.
    number2[5]=10;              // here will not get an exception.
    // cout<<number2.at(5);        //out of range exception
    cout<<number2[5];

    cout<<"First element in the array :"<<number2.front()<<endl;
    cout<<"last element in the array :"<<number2.back()<<endl;

    // Problem is that un-neccessary size increaseing
    for(int i=0;i<=32;i++){
        numbers.push_back(i);
        cout<<"Size :"<<numbers.size()<<"Capacity :"<<numbers.capacity()<<endl;
    }

    vector<int> number4;
    number4.reserve(31);
    // to reslove the above problem using reserve:
    for(int i =0;i<=30;i++){
        number4.push_back(i);
        cout<<"Size :"<<number4.size()<<"Capacity :"<<number4.capacity()<<endl;
    }
    return 0;
}