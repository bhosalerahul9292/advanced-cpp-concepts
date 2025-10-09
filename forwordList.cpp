#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int> list1 ={5,6,7,3,4};
    forward_list<int> list2 ={5,6,3,2,6,9};
    list1.insert_after(list1.begin(),0);
    for(auto &elm : list1){
        cout<<elm<<"->";
    }
    cout<<endl;
    list2.reverse();
    for(auto &elm : list2){
        cout<<elm<<"->";
    }
    
    

    cout<<endl;
    list1.resize(6);
    for(auto &elm : list1){
        cout<<elm<<"->";
    }
    cout<<endl;
    return 0;
}